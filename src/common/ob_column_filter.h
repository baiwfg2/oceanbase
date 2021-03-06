////===================================================================
 //
 // ob_column_filter.h / hash / common / Oceanbase
 //
 // Copyright (C) 2010 Taobao.com, Inc.
 //
 // Created on 2010-09-27 by Yubai (yubai.lk@taobao.com) 
 //
 // -------------------------------------------------------------------
 //
 // Description
 //
 //
 // -------------------------------------------------------------------
 // 
 // Change Log
 //
////====================================================================

#ifndef  OCEANBASE_COMMON_COLUMN_FILTER_H_
#define  OCEANBASE_COMMON_COLUMN_FILTER_H_
#include <cstdlib>
#include <stdint.h>
#include <cstdio>
#include <pthread.h>
#include <new>
#include <algorithm>
#include "ob_define.h"
#include "ob_scan_param.h"

namespace oceanbase
{
  namespace common 
  {
    class ColumnFilter
    {
      public:
        inline ColumnFilter() : column_num_(0), is_sorted_(false)
        {
        };
        inline ~ColumnFilter()
        {
        };
      public:
      
        inline static ColumnFilter *build_columnfilter(const ObScanParam &scan_param, ColumnFilter *column_filter)
        {
          ColumnFilter *ret = column_filter;
          if (NULL != column_filter)
          {
            int64_t column_size = scan_param.get_column_id_size();
            const uint64_t* cf_ids = scan_param.get_column_id();
            if (NULL == cf_ids)
            {
              ret = NULL;
            }
            else
            {
              column_filter->clear();
              for (int64_t i = 0; i < column_size; ++i)
              {
                if (OB_SUCCESS != column_filter->add_column(cf_ids[i]))
                {
                  TBSYS_LOG(WARN, "failed to add the %ld-th column, cf_id=%lu", i, cf_ids[i]);
                  ret = NULL;
                  break;
                }
              }
            }
          }
          return ret;
        }

        inline int add_column(const uint64_t column_id)
        {
          int ret = common::OB_SUCCESS;
          if (common::OB_MAX_COLUMN_NUMBER <= column_num_)
          {
            ret = common::OB_SIZE_OVERFLOW;
          }
          else
          {
            columns_[column_num_] = column_id;
            column_num_ += 1;
            is_sorted_ = false;
          }
          return ret;
        };
        bool column_exist(const uint64_t column_id) const
        {
          bool bret = false;
          if (common::OB_INVALID_ID == column_id)
          {
            bret = true;
          }
          else if (0 < column_num_)
          {
            if (!is_sorted_)
            {
              std::sort(columns_, &columns_[column_num_]);
              is_sorted_ = true;
            }

            if (common::OB_FULL_ROW_COLUMN_ID == columns_[0])
            {
              bret = true;
            }
            else
            {
              bret = std::binary_search(columns_, &columns_[column_num_], column_id);
            }
          }
          return bret;
        };
        bool is_all_column() const
        {
          bool bret = false;
          if (!is_sorted_)
          {
            std::sort(columns_, &columns_[column_num_]);
            is_sorted_ = true;
          }
          bret = (common::OB_FULL_ROW_COLUMN_ID == columns_[0]);
          return bret;
        };
        const char *log_str() const
        {
          int64_t pos = 0;
          log_buffer_[0] = '\0';
          for (int64_t i = 0; i < column_num_; ++i)
          {
            if (pos < LOG_BUFFER_SIZE)
            {
              pos += snprintf(log_buffer_ + pos, LOG_BUFFER_SIZE - pos, "%lu,", columns_[i]);
            }
            else
            {
              break;
            }
          }
          return log_buffer_;
        };
        void clear()
        {
          column_num_ = 0;
          is_sorted_ = false;
        };

        const uint64_t* get_columns() const
        {
          return columns_;
        }

        int32_t get_column_num() const
        {
          return column_num_;
        }
      private:
        static const int64_t LOG_BUFFER_SIZE = 1024;
        mutable char log_buffer_[LOG_BUFFER_SIZE];
        mutable uint64_t columns_[common::OB_MAX_COLUMN_NUMBER];
        int32_t column_num_;
        mutable bool is_sorted_;
    };
  }
}

#endif //OCEANBASE_COMMON_COLUMN_FILTER_H_

