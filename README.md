# Motive

When I first clone oceanbase 0.4 from github.com/alibaba/oceanbase, I found it's not well structured and 
intermediate files and exectuables are scattered within the whole project, which is not good. So I plan 
to replace automake with cmake, which is a much cleaner and powerful tool. Furthormore, some codes in 
this version are not normative. Maybe strict code review was not enforced at that development time. 
Since gcc 7.2 is being used, I made the code compilable with gcc 7.2. Many warnings exists if -Wall
is on, but that's the later work to eliminate them.

Currently RootServer, UpdateServer, ProxyServer, MergeServer and their corresponding static libraries
can be successfully built with cmake and gcc 7.2.

# Build

Original flags options seems to be very strict on gcc 7.2, which will lead to plenty of warnings with 
-Wall, or even error with -Werror. Maybe it's safe on gcc 4.x, but apparently not on gcc 7.x. So in 
order to compile OK, I remove -Wall and -Werror for the moment, which makes cmake building much quieter.
Anyway I'll fix those warnings when available.

So building with cmake is quite easier, just do :

```
cd oceanbase
mkdir build; cd build
cmake .. -DTBLIB_ROOT=... -DEASY_ROOT=...(DRC_ROOT is not needed, actually I even don't know what DRC means)
make
```
After a period of time based on your machine's speed, you'll see static libraries in build/lib and 
exectuables in build/bin

# Warning 

Currently I just use as lease build options as I can to make building good. If some exectuable need special
options to make running normally, you should use them. Options I use for now comes from Makefiles generated
by `sh build.sh init && ./configure && make`. ALL FLAGS are exported into [flags.md](./flags.md) when reference
is needed. Of course you can use automake's way to generate them.

Building with cmake is only tested on Centos 7.x.

Porting processs article could be found at [OceanBase 0.4 从automake,gcc 4.x到cmake,gcc7.x](https://zhuanlan.zhihu.com/p/35833750)

Have fun ~

***

<p> <img src="https://raw.github.com/alibaba/oceanbase/oceanbase_0.3/doc/%E5%9B%BE%E7%89%87%E5%A4%B9/logo.jpg">
</p>
<font size=5><div align="right"><a href="https://github.com/alibaba/oceanbase/wiki/EN_Home">English Version</a></div>
</font>

<p>OceanBase是<a href="http://page.china.alibaba.com/shtml/about/ali_group1.shtml"  target="_blank">阿里巴巴集团</a>自主研发的可扩展的关系型数据库，实现了跨行跨表的事务，支持数千亿条记录、数百TB数据上的SQL操作。在阿里巴巴集团下，OceanBase数据库支持了多个重要业务的数据存储，包括收藏夹、直通车报表、天猫评价等。截止到2013年4月份，OceanBase线上业务的数据量已经超过一千亿条。 </p>

<h2>1 最新动态</h2>
<p>2013/10/31，合并最新的bugfix和特性到0.42分支上：</p>
<ul>
  <li>
    <p><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-0.4.2-1502发布说明" target="_blank">OceanBase 0.4.2发布说明</a></p>
  </li>
  <li>
    <p><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-0.4.1-1225%E5%8F%91%E5%B8%83%E8%AF%B4%E6%98%8E" target="_blank">OceanBase 0.4.1发布说明</a></p>
  </li>
</ul>
<h2>2 发行日志</h2>
<p>OceanBase发行日志：</p>
<ul>
  <li>
    <p>2013/11/13：整理提交了V0.4.2代码和相关技术文档。 </p>
  </li>
  <li>
    <p>2013/04/28：整理提交了V0.4.1代码和相关技术文档。</p>
  </li>
  <li>
    <p>2013/03/04：整理提交了V0.3.1代码和相关技术文档。 </p>
  </li>
</ul>
<p>OceanBase客户端发行日志：</p>
<ul>
  <li>
    <p>2013/11/13：整理提交了OceanBase JAVA客户端“oceanbase-core-1.2.3.jar”和相关技术文档。</p>
  </li>
  <li>
    <p> 2013/09/13：整理提交了OceanBase JAVA客户端V1.1.1代码和相关技术文档。</p>
  </li>
  <li>
    <p>2013/07/29：整理提交了OceanBase C客户端和OceanBase JAVA客户端的RPM安装包。 </p>
  </li>
</ul>
<h2>3 版本特性</h2>
<p>OceanBase 0.4 版本特性如下，详细说明请参见“<a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-0.4-%E7%89%88%E6%9C%AC%E7%89%B9%E6%80%A7" target="_blank">OceanBase 0.4 版本特性</a>”：</p>
<ul>
  <li>
    <p> 使用libeasy网络框架代替了原来的tbnet，实现更高的网络处理性能。</p>
  </li>
  <li>
    <p>  全面支持MySQL协议。    </p>
  </li>
  <li>
    <p> 支持SQL的客户端库。</p>
  </li>
  <li>
    <p> 全面支持SQL。    </p>
  </li>
  <li>
    <p> 易用性改进。 </p>
  </li>
</ul>
<h1>4 资源地址</h1>
<p>当前OceanBase开源地址中主要维护0.4.2版本，如果您需要获取其他版本的源码和RPM包，请<a href="#title_7">联系我们</a>。</p>
<p>OceanBase开源地址如下：</p>
<ul>
<li>
  <p>OceanBase 源码：<a href="https://github.com/alibaba/oceanbase" target="_blank">https://github.com/alibaba/oceanbase</a></p>
</li>
<li>
  <p>OceanBase RPM包：<a href="https://github.com/alibaba/oceanbase_rpm_package" target="_blank">https://github.com/alibaba/oceanbase_rpm_package</a></p>
</li>
<li>
  <p>OceanBase 客户端：<a href="https://github.com/alibaba/oceanbase_client" target="_blank">https://github.com/alibaba/oceanbase_client</a></p>
</li>
</ul>

<h2>5 文档导读</h2>
<p>OceanBase 0.4.2 产品文档如下表所示：</p>
<table width="100%"  border="1" frame="all" rules="all">
  <tr>
    <td width="9%" bgcolor="B0B0B0"><b>序号</b></td>
    <td width="29%" bgcolor="B0B0B0"><b>文档名称</b></td>
    <td colspan="2" bgcolor="B0B0B0"><b>使用说明</b></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">1</div></td>
    <td width="29%"><a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase%200.4.2%20%E6%8F%8F%E8%BF%B0/" target="_blank">《OceanBase 0.4.2 描述》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.2的架构、存储引擎和功能等信息。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 描述.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">2</div></td>
    <td width="29%"> <a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase%200.4.2%20%E5%AE%89%E8%A3%85%E6%8C%87%E5%8D%97/"  target="_blank">《OceanBase 0.4.2 安装指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.2的安装过程。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 安装指南.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td><div align="center">3</div></td>
    <td><a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase-0.4.2-%E9%85%8D%E7%BD%AE%E6%8C%87%E5%8D%97"  target="_blank">《OceanBase 0.4.2 配置指南》</a></td>
    <td>该文档主要介绍搭建OceanBase 0.4.2的主备RootServer、主备UpdateServer和主备集群的方法。</td>
    <td><a href="https://github.com/alibaba/oceanbase/blob/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 配置指南.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">4</div></td>
    <td width="29%"><a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase%200.4.2%20%E5%BF%AB%E9%80%9F%E5%85%A5%E9%97%A8/" target="_blank">《OceanBase 0.4.2 快速入门》</a></td>
    <td width="55%">该文档主要介绍如何快速入门OceanBase 0.4.2的方法。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 快速入门.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">5</div></td>
    <td width="29%"><a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase%200.4.2%20%E5%AE%A2%E6%88%B7%E7%AB%AF%20%E7%94%A8%E6%88%B7%E6%8C%87%E5%8D%97/"  target="_blank">《OceanBase 0.4.2 客户端 用户指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.2的Java客户端和C客户端的使用方法。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 客户端 用户指南.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td><div align="center">6</div></td>
    <td><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-0.4.2-%E5%AE%A2%E6%88%B7%E7%AB%AF-%E7%94%A8%E6%88%B7%E6%8C%87%E5%8D%97%EF%BC%88%E9%98%BF%E9%87%8C%E5%86%85%E9%83%A8%EF%BC%89" target="_blank">《OceanBase 0.4.2 客户端 用户指南（阿里内部）》</a></td>
    <td><p>该文档主要介绍OceanBase  Java客户端和OceanBase C客户端的使用方法。与《OceanBase 0.4.2 客户端 用户指南》相比，本文档增加了OceanBase配置中心和OceanBase Java客户端中的阿里内部模块“oceanbase.jar”的介绍。</p></td>
    <td><a href="https://github.com/alibaba/oceanbase/blob/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 客户端 用户指南（阿里内部）.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">7</div></td>
    <td width="29%"><a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase%200.4.2%20SQL%20%E5%8F%82%E8%80%83%E6%8C%87%E5%8D%97/"  target="_blank">《OceanBase 0.4.2 SQL 参考指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.2支持的SQL语言、语法规则和使用方法等。</td>
    <td width="7%"><a href="https://github.com/alibaba/oceanbase/blob/oceanbase_0.4/doc/wiki/OceanBase%200.4.2%20SQL%20%E5%8F%82%E8%80%83%E6%8C%87%E5%8D%97.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">8</div></td>
    <td width="29%"><a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase%200.4.2%20%E5%8F%82%E8%80%83%E6%8C%87%E5%8D%97/" target="_blank">《OceanBase 0.4.2 参考指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.2的日志参考、系统结果码和术语等信息。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 参考指南.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">9</div></td>
    <td width="29%"><a href="http://code.taobao.org/p/OceanBase/wiki/OceanBase%200.4.2%20%E5%8D%87%E7%BA%A7%E6%8C%87%E5%AF%BC%E4%B9%A6/" target="_blank">《OceanBase 0.4.2 升级指导书》</a></td>
    <td width="55%">本文档主要介绍OceanBase 0.4.1版本升级到0.4.2版本的详细方法。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.2 升级指导书.pdf?raw=true">下载</a></td>
  </tr>
</table>
<p>OceanBase 0.4.1 产品文档如下表所示：</p>
<table width="100%"  border="1" frame="all" rules="all">
  <tr>
    <td width="9%" bgcolor="B0B0B0"><b>序号</b></td>
    <td width="29%" bgcolor="B0B0B0"><b>文档名称</b></td>
    <td colspan="2" bgcolor="B0B0B0"><b>使用说明</b></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">1</div></td>
    <td width="29%"><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-%E6%8F%8F%E8%BF%B0" target="_blank">《OceanBase 0.4.1 描述》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.1的架构、存储引擎和功能等信息。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 描述.pdf">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">2</div></td>
    <td width="29%"><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-%E5%AE%89%E8%A3%85%E6%8C%87%E5%8D%97" target="_blank"> 《OceanBase 0.4.1 安装指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.1的安装过程。</td>
    <td width="7%"></a><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 安装指南.pdf">下载</a></td>
  </tr>
  <tr>
    <td><div align="center">3</div></td>
    <td><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-配置指南" target="_blank">《OceanBase 0.4.1 配置指南》</a></td>
    <td>该文档主要介绍搭建OceanBase 0.4.1的主备RootServer、主备UpdateServer和主备集群的方法。</td>
    <td><a href="https://github.com/alibaba/oceanbase/blob/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 配置指南.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">4</div></td>
    <td width="29%"><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-%E5%BF%AB%E9%80%9F%E5%85%A5%E9%97%A8" target="_blank">《OceanBase 0.4.1 快速入门》</a></td>
    <td width="55%">该文档主要介绍如何快速入门OceanBase 0.4.1的方法。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 快速入门.pdf">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">5</div></td>
    <td width="29%"><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-%E5%AE%A2%E6%88%B7%E7%AB%AF-%E7%94%A8%E6%88%B7%E6%8C%87%E5%8D%97" target="_blank">《OceanBase 0.4.1 客户端 用户指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.1的Java客户端和C客户端的使用方法。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 客户端 用户指南.pdf">下载</a></td>
  </tr>
  <tr>
    <td><div align="center">6</div></td>
    <td><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-%E5%AE%A2%E6%88%B7%E7%AB%AF-%E7%94%A8%E6%88%B7%E6%8C%87%E5%8D%97%EF%BC%88%E9%98%BF%E9%87%8C%E5%86%85%E9%83%A8%EF%BC%89" target="_blank">《OceanBase 0.4.1 客户端 用户指南（阿里内部）》</a></td>
    <td><p>该文档主要介绍OceanBase Java客户端和OceanBase C客户端的使用方法。与《OceanBase 0.4.1 客户端 用户指南》相比，本文档增加了OceanBase配置中心和OceanBase Java客户端中的阿里内部模块“oceanbase.jar”的介绍。</p></td>
    <td><a href="https://github.com/alibaba/oceanbase/blob/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 客户端 用户指南（阿里内部）.pdf?raw=true">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">7</div></td>
    <td width="29%"><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-SQL-%E5%8F%82%E8%80%83%E6%8C%87%E5%8D%97" target="_blank">《OceanBase 0.4.1 SQL 参考指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.1支持的SQL语言、语法规则和使用方法等。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 SQL 参考指南.pdf">下载</a></td>
  </tr>
  <tr>
    <td width="9%"><div align="center">8</div></td>
    <td width="29%"><a href="https://github.com/alibaba/oceanbase/wiki/OceanBase-%E5%8F%82%E8%80%83%E6%8C%87%E5%8D%97" target="_blank">《OceanBase 0.4.1 参考指南》</a></td>
    <td width="55%">该文档主要介绍OceanBase 0.4.1的日志参考、系统结果码和术语等信息。</td>
    <td width="7%"><a href="https://raw.github.com/alibaba/oceanbase/oceanbase_0.4/doc/wiki/OceanBase 0.4.1 参考指南.pdf">下载</a></td>
  </tr>
</table>

