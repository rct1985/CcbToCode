###################
# @auth: >=-Rct-=<
#
# @Email: rct1985@163.com
#
# @func: 根据ccb, 生成类文件
#
# @date: 2013-06-06
#
# @company: CiWen Media Group 慈文传媒集团
##################


#cocs2dCodeGen 是在网上下载的一个工程编译出来的可执行文件, 简单改了一个
#./cocos2dCodegen 			可执行文件
#./ccbDir 					ccb文件目录
#./targetDir 				生成代码目录

#如果有新需要， 可以尝试改cocos2dCodeGen原码, 重新生成后，替换cocos2dCodeGen文件

# ****************版本更新内容*****************
# >=-2013-09-17 和max商议之后更改
# 1. 一个ccb 会产生两个类 ClassName_CCB及ClassName 共四个文件
# 2. 其中ClassName_CCB每次都工具产生，ClassName只产生一次，由程序员维护
# 3. 解决多个按钮不能绑定同一个selector的问题（原来会生产多个方法）
