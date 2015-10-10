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


#cocs2dCodeGen 是在网上下载的一个工程编译出来的可执行文件, 根据项目需要修改
#./cocos2dCodegen 			可执行文件
#./ccbDir 				ccb文件目录
#./targetDir 				生成代码目录，一般来说这个目录更新后直接拷到工程中
#./TargetCtrlDir                        生成控制代码目录，只生成一次，以后自己维护

#如果有新需要， 可以尝试改cocos2dCodeGen原码, 重新生成后，替换cocos2dCodeGen文件

# *************注意**************************
需要绑定代码的"AAAAClasss"必须在cocosBuilder中取一个"AAAAClass_CCB"的customClassName

# ****************版本更新内容*****************
# >=-2013-09-17 和max商议之后更改
# 1. 一个ccb 会产生两个类 ClassName_CCB及ClassName 共四个文件
# 2. 其中ClassName_CCB每次都工具产生，ClassName只产生一次，由程序员维护
# 3. 解决多个按钮不能绑定同一个selector的问题（原来会生产多个方法）

# >=-2013-10-15 针对绑定项必须指定Doc_Root_Var 的报错
# 1. 对象取了名字，但没有选定Doc_Root_Var 报警告
# 2. selector 取了名字，但没有选定Target_Root_Var 报警告

#>=-2015-10-10 潘的建议下修改
1. 在通过修改plist文件名, 改为codeTemplateCpp.plist (还要改代码里的一个宏 "Cocos2dX_3") 
2. 控制生成,支持cocos2dx 2.x的版本, 还是支持3.x的版本
3. 修改一些类型, 解决编译警告
4. 支持create加参数的方法, 用于指定ccbi文件

