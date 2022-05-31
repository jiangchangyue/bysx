// 导入插件
Import "ShanHai.lua"
Import "zm.luae" //导入插件,只需执行一次
zm.Init  //初始化插件,只需执行一次

Dim ret, t() // 文字识别提取结果

// 设置默认通用文字识别
If Not zm.OcrBaiDuInit("KpM6d7eeBUV7dGUAhsDhcfVd", "x9sjcbyTTk4Nv3kW7YPGBNQQnaSG0Imk") Then
    TracePrint "初始化设置百度云识别失败"
    EndScript
End If

// 全局变量
// 专业词库
Dim jsj_ciku = "多态,操作,面向过程,直接程序传送,环路,独立性,操作命令,位模式,地址解析,封装,进程,专用网络,继承,深度优先遍历,双向链表,十字链表,日志,三角矩阵,帧,指令长度,局部死锁,段页式管理,关键路径,三次握手,逻辑布线,吞吐率,操作系统,串行任务,同步,可擦可编程只读存储器,电可擦除只读存储器,虚拟类型,背包问题,读操作,缓冲池,专家系统,指令格式,资源,模板类,静态分析,集中式刷新,位扩展,数字签名,封闭性,电子邮件,存储器,存储器分配,动态规划,低成本,地址映射,前序遍历,动态验证,词法分析,实现视图,统一资源定位符,存取特权,黑盒测试,稀疏矩阵,局部性,其他外部设备,通信原语,持续性,先进先出,突发性,控制语句,逆序,按键存取,机器周期,多阶段决策,交互式,动态资源分配,总线,需求分析,实体完整性,抽象,全双工,蛮力法,栈顶,函数重载,信号干扰,规模,顺序图,指令,程序设计,保护成员,作业调度,控制,相同操作,数据成员,查询方式,临界资源,拷贝构造函数,顺序性,指令系统,子网,分类性,函数体,第一范式,假脱机,半双工,强连通,内联函数,广度优先遍历,存储空间,绝对路径,数据字典,堆排序,段页式,差错控制,释放内存,聚簇索引,满二叉树,独立请求,高内聚,偏移值,可编程只读存储器,二义性,控制总线,机器指令,计数器,以太网,路径,邻接矩阵,寻址方式,文件系统,边缘检测,实例化,拓扑,排序,符号,微操作,差,广义表,公有派生,保留字,单工,数组越界,左值,DMA控制器,驱动程序,类模板,程序,关联矩阵,核心态,多维,二叉排序树,布尔运算,交互技术,开放式系统互联,异步刷新,公共子表达式,本地接口,参数类型,访问权,空间局部性,私有派生,多线程,复杂度,传感器,反码,自底向上,标准输出,弹栈,深度学习,相对路径,就绪状态,文件,终端,长整型,父类,文件标志,进程间通信,查询,布尔搜索,数据清洗,移植,前驱,会话层,段式,邻接表,协议,浮点型,循环,动态分配,内核,命令,数据报,累加寄存器,类图,应用层,高速缓存,释放对象,控制块,机械,顺序结构,程序修改,即插即用,译码,处理时间,交换电路,初始化表,函数声明,抽象类,逻辑页号,引用,插入,响应比,析构,线性规划,赋值,词法,抢占式,顺序存取,组装结构,错误恢复过程,栈满,电路交换,冯诺依曼结构,IP地址,读脏数据,通信,语音识别,类嵌套,纯虚函数,开销,程序中断,分层,大数据,挂起,服务器,带宽,主存储器,时钟周期,覆盖,队尾,关系模型,消息隐蔽,整型常量,基类,溢出,双目运算,分块查找,一维,程序状态字,层次模型,指针,处理机,重载,类库,后继,虚拟存储器,自上而下,数据传递,对象,分支结构,二叉树,根结点,函数模板,二分查找,索引,依赖,全局,队列,进栈,栈空,实参,空指针,共享性,精简指令集,子网掩码,数据库管理系统,数据项,可维护性,并行传送,链表,简单邮件传输协议,多重继承,升序,贪心算法,中序遍历,this指针,首地址,递归,初始值,特权方式,程序控制块,优先级队列,子类,回溯,整体性,规则库,流水线,双进度,快速排序,文本传输协议,矩阵乘法,字节,快表,并行计算,循环结构,时间复杂度,汇编程序,数据独立性,虚拟机,二进制文件,功能需求,秘钥,物理层,帧中继,自动化,插入排序,后进先出,派生类,截断二进制退避算法,标准输入,逻辑分析,局部变量,参数个数,常变量,内存管理,触发,虚继承,数据类型,中央控制器,字符常量,可变分区,地址变换,进程同步,复杂性,私有成员,派生,迭代,机器语言,函数调用,二分搜索,伪代码,单精度,作业控制块,轮询,函数名,双端列表,函数,周期,递推,虚拟网,节点,寻址,数据挖掘,用例视图,目标码,实例,打印机,最短路径,端口,接口,事务,第二范式,网际协议,批处理,对称式处理,分布式,出栈,降序,生存期,字符串,交互视图,集线器,局部,线程,复合语句,基本属性,逻辑运算,I/O接口,离散性,主函数,成员函数,内部结点,带权周转时间,校验码,活动图,页内地址,遍历,段长,程序局部性,结构类型,编址,地址,分辨率,叶结点,存储芯片,友元函数,硬盘驱动器,数组,归并,灵敏度,信息交换,面向对象编程,形参,并发,低耦合,简单路径,接收端,传输层,接入点,DMA传送,判断,检验码,栈,子结点,循环冗余检验,超文本传输协议,PV操作,数据结构,逻辑常量,遍历二叉树,字典,数据总线,集中刷新,通道,字符,PSW,逻辑,语法,减法器,存储,通用寄存器,线性链表,二进制,辗转相除法,无线网络,队首,整体,优先级,集合,虚基类,迪杰斯特拉算法,空间复杂度,属性,类,消息传递,时间局部性,普通态,连通图,并行,分割,标志,随机性,公有继承,最小生成树,并行算法,特权指令,增量转储,周期挪用,进程调度,面向对象,数据流,结束符,平衡二叉树,静态成员,性能指标,弱连通,缓冲区,指令条数,并行搜索,系统,线索二叉树,唯一性,子树,单向链表,动态存储空间,特性,星型网,程序查询,存储器总线,私有继承,块,JCB,分散刷新,异步时分复用,变量,循环队列,堆,模块数,下标越界,运算器,逻辑独立性,神经网络,共享变量,中央处理器,多播,动态,网络管理员,布尔,常数,进程就绪,判断语句,公有成员,冗余,适配器,算数逻辑单元,循环链表,CPU,线性,回路,基数排序,非,串行,决策模型,继承性,二维,数据节点,设备独立性,微指令,可编程,深度,静态视图,网状网,共享内存"
jsj_ciku = Split(jsj_ciku, ",")
//常用词库
Dim chay_ciku = "公钥,驱动,扩展,模式,和,为,天空,读出,工程,分页,原因,确定,布属实图,好,等待,协作图,决策矩阵,交换机,释放,数据库,扇区,完全图,软件工程,网关,机器人,清晰,具有,信道,字扩展,逻辑划分,汇编器,可编程阵列逻辑,特权态交叉处理,算法,可重用性,存在量词,相同,结点,输入,爬虫,活动视图,就要,它,退出,数据链路层,状态码,二级独立,调相,一致性,分析,操纵,要求,天天,还有,天气,下列,描述,目态,中间值,类型,特性,交互设备,向量,基础,扫描,概念,发送,粘贴,非连通图,主页,屏蔽,编码,分支限界法,有利于,拒绝访问,结构化查询,代码,根据,虚电路,可行,初始化,是指,产生,分时,寻道,重构,映射,比特,状态,服务队列,技术栈,积分,最优化,空间,键盘,超连接,作用,固定,参数,磁盘,常见,可以,进行,表示层,制表符,海量转储,删除,包,指数,缓存,白盒测试,回车,标志,所有,像素,临时表,基站,之间,容错,磁盘驱动器,网络层,不可重复读,段表,架构,补集,运行,调试,编译,读取,次数,分配,库,空集,统一,存储矩阵,长度,就绪,域名,仲裁,用来,查找,增加,容量,时延,霍夫变换,一定,睡眠,最大值,分号,传输,提高,传递率,鼠标,存储元件,被,系统态,写入,香农定理,虚拟内存,模式识别,分组交换,逻辑单元,掩码,内部,硬件,压缩,可变字长,数据分析,分类器,二分图,网卡,计算,数组名,的,独立,形式,其,易扩展,时钟,短作业优先,结构体,权限,动态绑定,单位,控制,再,计算机网络,笛卡尔集,间接访问,扩展名,属于,工作状态,客体,值域,自下而上,竞争,传递,最优解,用户态,组成,复制,时分复用,一起,弱连通图,霍夫曼编码,利用,网桥,审计,原子性,云计算,及,触发器,划分,换行,拥塞,转置矩阵,不错,结构体变量,入度,子集,阳光,数据传输率,检索,多级中断,异步,环型网,宏定义,回收,边缘匹配,电气,程序扩展,病毒,散列表,条形码,能力,发生,认证,频率,算数运算,基本,计算机,无线局域网,全部,文件目录,行列式,媒体,数据,运算,提供,环境,最优值,不同,页式,合并,监督学习,处理器,时间,条件,平均功率,仿真,效率,解压,产品,介绍,窗口,机器视觉,主机,进程互斥,流量控制,工作,了,且,四个,链式查询,较低,部分,路由器,段号,总线网,动作,碎片,用户,监控程序,边界,边缘计算,种类,图像识别,螺旋模型,网路地址,用,虚拟现实,文本文件,信号,逻辑地址,明媚,用例图,多云,客户机,共享,功能分析,路由表,运算优先级,管理,浏览器,使用,冲突消解,只读存储器,显示器,静态建模,空,应用程序接口,控制器,直接访问,副本,交替,拒绝服务,不正确,具体,视图,成员名,异常,时间片轮转法,有点,该,框架,搜索引擎,卷积,实现,模型管理视图,请求块,跳出,今天,创建,自然语言处理,寄存器,投影,二维码,包括,她,大小,数据独立,解决,命中率,双绞线,广域网,文本,增长率,硬布线,第四范式,状态机视图,可擦,零,自发性,特点,避免,个数,网站,为了,结合性,一些,屏幕,外码,啊,代码生成,冲突,允许,地,乘法,必要,密码,三级抽象,页号,调频,作用于,源代码,途径,应用,代理,分类结构,分类,头文件,正确,行为,微指令,乘积,取值,写操作,并行端口,他,是,本地终端,消息,分治法,经历,文本框,摩尔定律,导入,图形用户界面,预处理,选择排序,抖动,叙述,提交,矩阵,边界网关协议,冲突检测,可能,取,随机,中断屏蔽,附件,预防,区别,麦克风,结果,解除,很好,时序图,交换,后台,局部应用,采样,页面置换,指令寄存器,局域网,我,功能,域名系统,传输控制协议,类名,安装,脱机,模块性,物理页面,对称矩阵,检测,脉冲,同轴电缆,外存,接收,代数优化,技术,第三范式,物理优化,光缆,拷贝,主存,图表,修改,先来先服务,查询语言,自反律,调度,目的,自动,内存,封装性,访问,以上,窗口大小,机制,差集,元素,求导,保护,较高,授权,建立,不,数据包,速度,性能评价,离散,叶子,页表,八皇后,广度,事物,平衡,丢失修改,包装,点对点协议,语言,媒体访问控制值,构成,表达,加密,条件码,方法,得,双向,进制,间歇性,数据终端,主键,下标,模块,软件,缓冲,处理,噪声,综合,后序遍历,两个,唤醒,客户/服务器模式,刷新,周转时间,完成,偏序,管态,利用率,代码共享,重要,调幅,二路归并,缺点,模型,响应,信道容量,顺序,禁止,多态性,额外,隔离性,监控,关键字,更新,开销,银行家算法,枚举常量,万维网,最小值,处理机状态字,后处理,软件危机,频分复用,时钟信号,断点,输出,逻辑电路,机器学习,操作码,你,一个,安全,管道通信,一组,密码学,规则,子问题,定义,中断,奇偶校验,出度,结构化,量化,模拟,活动文件,强连通图,方面,卸载,合理,距离向量,概率,随机数生成,原理,卷积核,死锁,命令行,调用,有穷,分区,增广律,逻辑分布,回归,编程,指,替换,自定义,集成电路,介质,或,过程"
chay_ciku = Split(chay_ciku, ",")

Dim intX, intY // 元素定位坐标
Dim dxk1,dxk2,qunming,daanming // 多选框，群名，文件名
Dim choice_ans // 存放答案文件中的选择题
Dim fillemp_ans(100) // 存放答案文件中的填空题
Dim jianda_ans(100) // 存放答案文件中的简答题
Dim lines // 存放答案文件中的行数
Dim lujing = "/sdcard/data/" // 答案路径
Dim score_data_lj // 成绩数据路径

Dim gjc_zy(100) // 关键词，专业
Dim gjc_cy(100) // 关键词，常用
Dim ans(100) // 选填的答案
Dim xsname // 学生姓名
Dim xsnumb // 学生学号

Dim choice_tiqu // 存放答案文件中的选择题
Dim fillemp_tiqu(100) // 存放答案文件中的填空题
Dim jianda_tiqu(100) // 存放答案文件中的简答题
Dim tiqu_ans(100) // 存放提取答案
Dim tiqu(100) // 存放临时提取答案
Dim l = 0

Dim gjc_zy_tiqu(100) // 关键词，专业
Dim gjc_cy_tiqu(100) // 关键词，常用

Dim pj // 作业评价

Dim choice_zf = 0// 选择题总分
Dim fillemp_zf = 0// 填空题总分
Dim jianda_zf = 0// 简答题总分
Dim choice_jf = 0// 选择题单个分值
Dim fillemp_jf = 0//填空题单个分值
Dim jianda_jf = 0// 简答题单个分值

Dim choice_num = 0 // 选择题个数
Dim fillemp_num = 0 // 填空题个数
Dim jianda_num = 0 // 简答题个数

Dim score //分数

qunming = ReadUIConfig("input1") // 读取群名称
//TracePrint qunming
daanming = ReadUIConfig("input2") // 读取答案文件名
//TracePrint daanming
daanming = daanming & ".txt" // 文件名添加后缀
lujing = lujing & daanming
//TracePrint lujing
dxk1 = ReadUIConfig("多选框1") // 判断多选框1是否选中
//TracePrint dxk
dxk2 = ReadUIConfig("多选框2") // 判断多选框2是否选中
//TracePrint dxk

choice_zf = ReadUIConfig("score1") // 读取选择题总分值
TracePrint choice_zf
fillemp_zf = ReadUIConfig("score2") // 读取填空题总分值
TracePrint fillemp_zf
jianda_zf = ReadUIConfig("score3") // 读取简答题总分值
TracePrint jianda_zf

Dim jgfx_lj = "/sdcard/data/" & qunming & "result.txt" // 结果分析路径
Call File.Write(jgfx_lj, "") // 创建学生作业结果文件

score_data_lj = "/sdcard/data/" & qunming & "成绩数据.txt" //成绩数据路径
Call File.Write(score_data_lj, "") // 创建学生成绩数据文件

// 从任意界面进入到学生作业界面
Function 进入作业页面()
	Do
		RunApp "com.tencent.mobileqq" //启动QQ
		TracePrint "进入作业页面"
		Delay 1000
		KeepCapture 

		// 查找指定的图标
		FindPic 0,0,0,0,"Attachment:下一份.png","050505",0,0.9,intX,intY
//		FindPic 0,0,0,0,"Attachment:新下一份.png","050505",0,0.9,intX,intY
		If intX > -1 And intY > -1 Then // 如果找到
			TracePrint intX
			TracePrint intY
//			Tap intX, intY
			TracePrint "到达终点"
			Exit Do
		Else 
			Delay 500
			KeepCapture 
			
			// 查找批改图标并点击进入批改
			FindPic 0,0,0,0,"Attachment:批改.png","050505",0,0.9,intX,intY
//			FindPic 0,0,0,0,"Attachment:新批改.png","050505",0,0.9,intX,intY
			If intX > -1 And intY > -1 Then
				TracePrint intX
				TracePrint intY
				TracePrint "进入批改"
				Tap intX, intY
			Else 
				Delay 500
				KeepCapture 
				// 查找待批改图标，进入作业
				FindPic 0,0,0,0,"Attachment:待批改.png","050505",0,0.9,intX,intY
//				FindPic 0,0,0,0,"Attachment:新待批改.png","050505",0,0.9,intX,intY
				If intX > -1 And intY > -1 Then
					TracePrint intX
					TracePrint intY
					TracePrint "进入待批改"
					Tap intX, intY
				Else 
					Delay 500
					KeepCapture

					// 查找作业程序图标并点击
					FindPic 0,0,0,0,"Attachment:作业.png","050505",0,0.9,intX,intY
//					FindPic 0,0,0,0,"Attachment:新作业.png","050505",0,0.9,intX,intY
					If intX > -1 And intY > -1 Then
						TracePrint intX
						TracePrint intY
						TracePrint "进入作业"
						Tap intX, intY
					Else 
						Delay 500
						KeepCapture 
						// 查找点击进入群详情
						FindPic 0,0,0,0,"Attachment:群详情.png","050505",0,0.9,intX,intY
						If intX > -1 And intY > -1 Then
							TracePrint intX
							TracePrint intY
							TracePrint "群详情"
							Tap intX, intY
						Else 
							Delay 1000
							KeepCapture

							// 查找指定图标
							FindPic 0,0,0,0,"Attachment:网络查找.png","050505",0,0.9,intX,intY
//							FindPic 0,0,0,0,"Attachment:新网络查找.png","050505",0,0.9,intX,intY
							If intX > -1 And intY > -1 Then
								//TracePrint intX
//								TracePrint intY
								TracePrint "点击进群"
								Tap intX+100,intY-100
							Else 
								Delay 500
								KeepCapture

								// 查找搜索框
								FindPic 1,39,274,142,"Attachment:sousuo.png","000000",0,0.9,intX,intY
//								FindPic 0,0,0,0,"Attachment:新sousuo.png","050505",0,0.9,intX,intY
								If intX > -1 And intY > -1 Then
									TracePrint intX
									TracePrint intY
									TracePrint "点击搜索输入"
									For 2
										Tap intX, intY
									Next
									Delay 1000
									// 点击输入课程名
									InputText qunming
									Delay 3000
								Else 
									Delay 500
									KeepCapture
									
									TracePrint "点击搜索"
									// 查找搜索，进入搜索
									FindPic 0,0,0,0,"Attachment:搜索.png","000000",0,0.9,intX,intY
//									FindPic 0,0,0,0,"Attachment:新搜索.png","050505",0,0.9,intX,intY
									If intX > -1 And intY > -1 Then
										TracePrint intX
										TracePrint intY
										TracePrint "点击搜索框1"
										For 2
											Tap intX, intY
										Next
									End If
									ReleaseCapture
								End If
								ReleaseCapture
							End If
							ReleaseCapture 
						End If
						ReleaseCapture
					End If
					ReleaseCapture 
				End If
				ReleaseCapture
			End If
			ReleaseCapture
		End If
		ReleaseCapture
	Loop
End Function

// 读取答案文件中的答案并进行提取处理
Function 文件答案读取与处理()
	// 计算指定路径下答案文件的行数
	choice_num = 0
	fillemp_num = 0
	jianda_num = 0
	
	lines = file.linesnumber(lujing) //读取该文本文件的行数
	For i = 1 To lines
		// 逐行读取文件内容
		Dim text = file.Readline(lujing, i)
		// 如果出现 “选择” 关键字
		If InStr(1, text, "选择") > 0 Then 
			Dim j = i + 1
			Do
				Dim temp = file.Readline(lujing, j)
				// 如果遇到“填空、简答”关键字，或者最后一行，则结束循环
				If InStr(1, temp, "填空") > 0  Or j - lines > 0 Or InStr(1, temp, "简答") > 0 Then 
//				 	TracePrint "选择题"
					Exit Do
				Else 
//					choice_ans(j - i - 1) = temp
					choice_ans = choice_ans & temp
					choice_num = choice_num + Len(temp)
					j = j + 1
				End If
			Loop
		// 如果遇到 “填空” 关键字
		ElseIf InStr(1, text, "填空") > 0 Then
			j = i + 1
			Do
				temp = file.Readline(lujing, j)
				// 如果遇到“简答”关键字，或者最后一行，则结束循环
				If InStr(1, temp, "简答") > 0 Or j - lines > 0 Then 
//				 	TracePrint "填空题"
					Exit Do
				Else 
					// 将该行答案按照“.”分割
					temp = Split(temp, ".")
					fillemp_ans(j - i - 1) = temp(1)
					fillemp_num = fillemp_num + 1
					j = j + 1
				End If
			Loop
		// 如果遇到 “简答” 关键字
		ElseIf InStr(1, text, "简答") > 0 Then
			j = i + 1
			Do
				temp = file.Readline(lujing, j)
				If j - lines > 0 Then 
//					TracePrint "简答题"
					Exit Do
				Else 
					// 将该行答案按照“.”分割
					temp = Split(temp, ".")
					jianda_ans(j - i - 1) = temp(1)
					jianda_num = jianda_num + 1
					j = j + 1
				End If
			Loop
		End If 
	Next
	Call 答案简答题划分()
End Function

// 提取学生作业界面的作业信息
Function 学生作业提取()
	TracePrint "页面XML作业提取"
	Delay 1000
	// 获取学生作业详情页面的 XML 信息
	Dim zyXML = ShanHai.GetUIXml()
	TracePrint zyXML
	
	// 将 XML 中信息按照正则式进行提取
	Dim content = ShanHai.RegexFind(zyXML,"desc=""([^#&""]+)")
	
	l = 0
	For Each k In content
		// 过滤掉无用内容
		If InStr(1, k, "&#") > 0 Then 
	//		TracePrint "跳过"
		Else 
			// 将提取到的答案结果放入 tiqu 数组
			tiqu(l) = k
			l = l + 1
		End If
	Next
	
	// 过滤掉提取内容中的特殊符号
	For j = 0 To UBOUND(tiqu) - 4
		tiqu_ans(j) = Replace(tiqu(j), "?", "")
		TracePrint tiqu_ans(j)
	Next
	
	// 提取学生的姓名和学号
	Dim t = Split(tiqu_ans(0), "+")
	xsname = t(0) // 学生姓名
	xsnumb = t(1) // 学生学号
	xsnumb = Replace(xsnumb, "的作业", "")
	
	// 将提取得到的学生答案进行分类处理
	Dim lines_tiqu = UBound(tiqu_ans) 
//	TracePrint UBound(tiqu_ans)
	TracePrint lines_tiqu
	For i = 1 To lines_tiqu
		TracePrint tiqu_ans(i)
	Next
	
	choice_tiqu = ""
	For i = 1 To lines_tiqu
//		TracePrint i
//		TracePrint tiqu_ans(i)
		
		// 如果遇到选择题
		If InStr(1, tiqu_ans(i), "选择") > 0 Then 
		 	TracePrint "进入选择题"
			Dim j = i + 1
			Do
				Dim temp = tiqu_ans(j)
				// 判断跳出循环的标志
				TracePrint temp
				If InStr(1, temp, "填空") > 0 Or InStr(1, temp, "简答") > 0 Or j - lines_tiqu > 0 Then 
					TracePrint "跳出选择题"
					Exit Do
				Else 
	//				choice_tiqu(j - i - 1) = temp
					choice_tiqu = choice_tiqu & temp
					TracePrint choice_tiqu
					j = j + 1
				End If
			Loop
		// 如果遇到填空题
		ElseIf InStr(1, tiqu_ans(i), "填空") > 0 Then
			TracePrint "进入填空题"
			j = i + 1
			Do
				temp = tiqu_ans(j)
				TracePrint temp
					
				// 判断跳出循环的标志
				TracePrint lines_tiqu
				TracePrint j
//				If InStr(1, temp, "简答") > 0 Or j - lines_tiqu >= 0 Or InStr(1, temp, "老师评语") > 0 Then
 				If InStr(1, temp, "简答") > 0 Or InStr(1, temp, "老师评语") > 0 Then 
					TracePrint "跳出填空题"
					Exit Do
				ElseIf j - lines_tiqu >= 0
					temp = Split(temp, ".")
					fillemp_tiqu(j - i - 1) = temp(1)
					TracePrint fillemp_tiqu(j-i-1)
					Exit Do
				Else 
					temp = Split(temp, ".")
					fillemp_tiqu(j - i - 1) = temp(1)
					TracePrint fillemp_tiqu(j-i-1)
					j = j + 1
				End If
			Loop
		// 如果遇到简答题
		ElseIf InStr(1, tiqu_ans(i), "简答") > 0 Then
			TracePrint "进入简答题"
			j = i + 1
			Do
//				TracePrint j
//				TracePrint lines_tiqu
				// 判断跳出循环的标志
				temp = tiqu_ans(j)
				If j - lines_tiqu > 0 Or InStr(1, temp, "老师评语") > 0 Then 
					TracePrint "跳出简答题"
					Exit Do
				Else 
					TracePrint temp
					temp = Split(temp, ".")
					jianda_tiqu(j - i - 1) = temp(1)
					TracePrint jianda_tiqu(j-i-1)
					j = j + 1
				End If
			Loop
		End If
	Next
	TracePrint "结束"
	Call 提取简答题划分()
End Function

// 提取学生提交的图片中的答案
Function 图片作业提取()
	TracePrint "图片作业提取"
	// 点击进入查看图片
	Delay 1000
	Tap 288, 466
	Delay 2000
	
	//全屏识别文字
	//ret = zm.OcrBaiDu(63,236,489,751)
	ret = zm.OcrBaiDu(10,222,538,730)
	TracePrint "识别结果:", ret
	Dim content = Split(ret, "\n")

	For i = 0 To UBOUND(content)
		TracePrint content(i)
	Next
	
	Dim temp
	temp = Split(content(1), ":")
	xsname = temp(1) // 提取学生姓名
	temp = Split(content(2), ":")
	xsnumb = temp(1) // 提取学生学号
	
	TracePrint xsname 
	TracePrint xsnumb
	
	// 提取选择题
	choice_tiqu = content(4)
	choice_tiqu = Replace(choice_tiqu," ","")
	TracePrint choice_tiqu
	
	// 提取填空题
	For i = 0 To 4
		fillemp_tiqu(i) = content(i + 6)
		TracePrint fillemp_tiqu(i)
	Next
	
	// 提取简答题
	For i = 5 To UBOUND(content)-12
		jianda_tiqu(0) = jianda_tiqu(0) & content(i + 7)
	//	TracePrint ans_stu(i)
	Next

	TracePrint jianda_tiqu(0)
	
	// 点击图片返回
	Delay 1000
	Tap 288, 466
	Delay 1000
End Function

// 将提取的学生的答案信息进行显示
Function 提取答案显示()
	// 将提取到的学生的答案处理过后的结果进行显示，用于调试
	// 显示选择题
	//For i = 0 To UBound(choice_tiqu)
	If Len(choice_tiqu) <> 0 Then 
		TracePrint choice_tiqu
	End If
	//Next
	
	// 显示填空题
	For i = 0 To UBound(fillemp_tiqu)
		TracePrint fillemp_tiqu(i)
	Next
	
	// 显示简答题
	For i = 0 To UBound(jianda_tiqu)
		TracePrint jianda_tiqu(i)
	Next
			
	//显示简答题中提取的专业性关键词	
	For i = 0 To UBOUND(gjc_zy_tiqu)
		TracePrint gjc_zy_tiqu(i)
	Next

	//显示简答题中提取的通用性关键词
	For i = 0 To UBOUND(gjc_cy_tiqu)
		TracePrint gjc_cy_tiqu(i)
	Next
End Function

// 将答案文件中的标准答案进行显示
Function 标准答案显示()
	// 将答案文件中的答案处理过后的结果进行显示，用于调试
	// 显示选择题
	//For i = 0 To UBound(choice_ans)
		TracePrint choice_ans
	//Next
	
	// 显示填空题
	For i = 0 To UBound(fillemp_ans)
		TracePrint fillemp_ans(i)
	Next
	
	// 显示简答题
	For i = 0 To UBound(jianda_ans)
		TracePrint jianda_ans(i)
	Next
		
	//显示简答题中提取的专业性关键词	
	For i = 0 To UBOUND(gjc_zy)
		TracePrint gjc_zy(i)
	Next

	//显示简答题中提取的通用性关键词
	For i = 0 To UBOUND(gjc_cy)
		TracePrint gjc_cy(i)
	Next
End Function

// 处理没有答案文件，而由老师手动输入的答案
Function 填写答案读取与处理()
	// 提取所有输入框的信息
	For i = 1 To 7
		ans(i-1) = ReadUIConfig("ans"&i)
	Next
	For i = 0 To UBound(ans)
		TracePrint ans(i)
	Next
	
	// 提取输入的选择题答案
	choice_ans = ReadUIConfig("ans1")
	// 算出选择题的个数
	choice_num = Len(choice_ans)
	
	// 提取填空题的答案
	Dim temp = ReadUIConfig("ans2")
	// 将答案分割，放入填空题数组
	temp = Split(temp, "，")
	For i = 0 To UBOUND(temp)
		fillemp_ans(i) = temp(i)
		// 算出填空题个数
		fillemp_num = fillemp_num + 1
	Next
	
	// 提取简答题
	For i = 2 To UBOUND(ans)
		If ans(i) <> "" Then 
			jianda_ans(i - 2) = ans(i)
			// 算出简答题的个数
			jianda_num = jianda_num + 1
		End If
	Next
End Function

// 从简答题中提取专业性关键词和常用性关键词
Function 答案简答题划分()
	// 循环每一个简答题
	For j = 0 To UBOUND(jianda_ans)
		// 过滤掉简答题中的标点符号
		jianda_ans(j) = Replace(jianda_ans(j), "，", "")
		jianda_ans(j) = Replace(jianda_ans(j), "。", "")
		jianda_ans(j) = Replace(jianda_ans(j), "；", "")
		jianda_ans(j) = Replace(jianda_ans(j), "、", "")

		// 与专业词库中的关键词进行匹配，提取出关键词
		For i = 0 To UBOUND(jsj_ciku)
			If InStr(1, jianda_ans(j), jsj_ciku(i)) > 0 Then 
//				TracePrint jsj_ciku(i)
				// 将提取的关键词放入数组
				gjc_zy(j) = gjc_zy(j) & jsj_ciku(i) & ","
			End If
		Next
//		TracePrint "/////////"
	Next
	
	// 循环每一个简答题
	For j = 0 To UBOUND(jianda_ans)
		For i = 0 To UBOUND(chay_ciku)
			// 与常用词库中的关键词进行匹配，提取出关键词
			If InStr(1, jianda_ans(j), chay_ciku(i)) > 0 Then 
//				TracePrint chay_ciku(i),i
				// 将提取的关键词放入数组
				gjc_cy(j) = gjc_cy(j) & chay_ciku(i) & ","
			End If
		Next
//		TracePrint "/////////"
	Next
End Function

// 将提取到的简答题进行专业词汇和常用词汇关键词的划分
Function 提取简答题划分()
	// 循环每一个简答题
	For j = 0 To UBOUND(jianda_tiqu)
		// 过滤掉简答题中的标点符号
		jianda_tiqu(j) = Replace(jianda_tiqu(j), "，", "")
		jianda_tiqu(j) = Replace(jianda_tiqu(j), "。", "")
		jianda_tiqu(j) = Replace(jianda_tiqu(j), "；", "")
		jianda_tiqu(j) = Replace(jianda_tiqu(j), "、", "")
		
		gjc_zy_tiqu(j) = ""
		// 与专业词库中的关键词进行匹配，提取出关键词
		For i = 0 To UBOUND(jsj_ciku)
			If InStr(1, jianda_tiqu(j), jsj_ciku(i)) > 0 Then 
//				TracePrint jsj_ciku(i)
				// 将提取的关键词放入数组
				gjc_zy_tiqu(j) = gjc_zy_tiqu(j) & jsj_ciku(i) & ","
			End If
		Next
//		TracePrint "/////////"
	Next
	
	// 循环每一个简答题
	For j = 0 To UBOUND(jianda_tiqu)
		gjc_cy_tiqu(j) = ""
		For i = 0 To UBOUND(chay_ciku)
			// 与常用词库中的关键词进行匹配，提取出关键词
			If InStr(1, jianda_tiqu(j), chay_ciku(i)) > 0 Then 
//				TracePrint chay_ciku(i),i
				// 将提取的关键词放入数组
				gjc_cy_tiqu(j) = gjc_cy_tiqu(j) & chay_ciku(i) & ","
			End If
		Next
//		TracePrint "/////////"
	Next
End Function

// 将学生提取处理后的答案与标准答案进行匹配
Function 答案匹配()
	TracePrint "答案匹配"
	// 先向结果分析文件中写入学生的姓名和学号
	Call File.Append(jgfx_lj, "姓名:")
	Call File.Append(jgfx_lj, xsname & "\n")
	Call File.Append(jgfx_lj, "学号：")
	Call File.Append(jgfx_lj, xsnumb & "\n")
	
	// 先向分数数据文件中写入学生的姓名和学号
	Call File.Append(score_data_lj, xsname & "|")
	Call File.Append(score_data_lj, xsnumb & "|")
	
	// 所有题目每一项的分值
	If choice_num <> 0 Then 
		choice_jf = choice_zf / choice_num // 计算选择题单项分值
	End If
	
	If fillemp_num <> 0 Then 
		fillemp_jf = fillemp_zf / fillemp_num // 计算填空题单项分值
	End If
	
	If jianda_num <> 0 Then 
		jianda_jf = jianda_zf / jianda_num // 计算简答题单项分值
	End If
	
	// TracePrint choice_jf
	// TracePrint fillemp_jf
	// TracePrint jianda_jf
	
	score = 100 // 初始化总分数为 100 分
	Dim i = 0 // 数组指针
	pj = ""

//	TracePrint Len(choice_ans)
	For i = 1 To Len(choice_ans)
		If Mid(choice_tiqu, i, 1) <> Mid(choice_ans, i, 1) Then 
			score = score - choice_jf
			pj = pj & "选择题错误题号：" & i & "\n"
		End If
	Next
	
	i = 0 // 指针初始化为0
	While i <= UBOUND(fillemp_tiqu) and i <= UBOUND(fillemp_ans)
		// 如果填空题与答案中不同
		If StrComp(fillemp_tiqu(i), fillemp_ans(i)) <> 0 Then 
			score = score - fillemp_jf
//			TracePrint "填空题错误"
			pj = pj & "填空题错误题号：" & i+1 & "\n"
		End If
		i = i + 1
	Wend
	
	i = 0 // 指针初始化为0
	TracePrint UBound(gjc_zy)
	TracePrint UBound(gjc_zy_tiqu)
	While i <= UBOUND(gjc_zy)
		Dim temp_zy = gjc_zy(i) // 取出每一题的专业关键词
		Dim temp_zy_tiqu = gjc_zy_tiqu(i) // 取出每一学生答案中的专业关键词
		
		TracePrint temp_zy
		TracePrint temp_zy_tiqu
		// 将每一个简答题的关键词按照逗号分割
		temp_zy = Split(temp_zy, ",")
		temp_zy_tiqu = Split(temp_zy_tiqu, ",")
		
		Dim zy_num = 0 // 初始化匹配上的专业词汇的数量
		Dim cy_num = 0 // 初始化匹配上的常用词汇的数量
		
		// 遍历每一个专业词汇
		For m = 0 To UBOUND(temp_zy)-1
			For n = 0 To UBOUND(temp_zy_tiqu)-1
//				TracePrint gjc_zy(1)
				// 如果专业词汇不匹配
				If StrComp(temp_zy(m), temp_zy_tiqu(n)) <> 0 Then 
					//TracePrint ""
				Else 
					// 如果匹配数加一
					zy_num = zy_num + 1
					TracePrint zy_num
				End If
			Next
		Next
		

		Dim temp_cy = gjc_cy(i) // 划分后的答案中的简答题的常用关键词个数
		Dim temp_cy_tiqu = gjc_cy_tiqu(i) // 划分后的学生的简答题的常用关键词个数
		
		TracePrint temp_cy
		TracePrint temp_cy_tiqu
		
		// 将每一个简答题的关键词按照逗号分割
		temp_cy = Split(temp_cy, ",")
		temp_cy_tiqu = Split(temp_cy_tiqu, ",")
		
		// 遍历每一个常用词汇
		For m = 0 To UBOUND(temp_cy)-1
			For n = 0 To UBOUND(temp_cy_tiqu)-1
				// 如果常用词汇不匹配
				If StrComp(temp_cy(m), temp_cy_tiqu(n)) <> 0 Then 
//					TracePrint ""
				Else 
//				 	TracePrint temp_cy(m)
//				 	TracePrint temp_cy_tiqu(n)
					// 如果匹配数加一
					cy_num = cy_num + 1
					TracePrint cy_num
				End If
			Next
		Next
		
		Dim len_zy = UBound(temp_zy) // 匹配的专业词汇的个数
		Dim len_cy = UBound(temp_cy) // 匹配的常用词汇的个数
		
		TracePrint zy_num
		TracePrint cy_num
		TracePrint len_zy
		TracePrint len_cy
		// 基于关键词的模糊匹配算法
		// 计算相似率
		Dim xsl = (zy_num/len_zy)*0.7 + (cy_num/len_cy)*0.3

		// 总分减去不相似部分的分数
		score = score - (jianda_jf * (1 - xsl))
		xsl = Round(xsl, 3)
		score = Round(score,3)
		TracePrint xsl
		pj = pj & "简答题" & i+1 & "相似率："
		pj = pj & xsl
		pj = pj & "\n"
		
		i = i + 1
	Wend
	pj = pj & "得分："
	pj = pj & score
	
	TracePrint pj
	// 将最终的评价写入结果分析文件中
	Call File.Append(jgfx_lj, pj)
	Call File.Append(jgfx_lj, "\n")
	Call File.Append(jgfx_lj, "\n")
	
	// 将最后得分写入分数数据文件中
	Call File.Append(score_data_lj, score)
	Call File.Append(score_data_lj, "\n")
	
	Delay 1000
	Call 填写评价()
	Delay 1000
End Function

// 手机屏幕向上滑动
Function 向上滑动()
	// 从坐标(282,600)滑动到(282,200)，耗时0.6秒
	Swipe 282, 600, 282, 200, 600
	Delay 1000
End Function

// 在填写评语位置写入学生最后的作业修改信息
Function 填写评价()
	Do
		KeepCapture 
//		FindPic 0,0,0,0,"Attachment:填写评语.png","000000",0,0.9,intX,intY
		// 定位，确认填写评语的部位
//		FindPic 0,0,0,0,"Attachment:老师评语.png","050505",0,0.9,intX,intY
		FindPic 0,0,0,0,"Attachment:录制语音.png","050505",0,0.9,intX,intY
//		FindPic 0,0,0,0,"Attachment:新录制语音.png","050505",0,0.9,intX,intY
		If intX > -1 And intY > -1 Then 
			TracePrint "找到录制语音"
//			TracePrint intX
//			TracePrint intY
			Dim X = intX
			Dim Y = intY
			Do
				KeepCapture 
				// 判断是否写入评语
				FindPic 0,0,0,0,"Attachment:填写评语.png","000000",0,0.9,intX,intY
//				FindPic 0,0,0,0,"Attachment:新点击填写.png","050505",0,0.9,intX,intY
				If intX > -1 And intY > -1 Then
//					TracePrint intX
//					TracePrint intY
					For 2 // 连续点击两次
						Tap X - 46, Y - 133
						Delay 500
					Next
					Delay 500
					TracePrint pj
					InputText pj // 输入评语
					Delay 2000
				Else 
					Exit Do
				End If
				ReleaseCapture
			Loop
			Exit Do
		Else 
			TracePrint "向上滑动"
			Call 向上滑动()
			Delay 1000
		End If
	Loop
End Function

// 进行下一份作业的批改
Function 下一份()
	Dim flg = 0
	Do
		KeepCapture 
		// 继续下一份
		FindPic 0,0,0,0,"Attachment:下一份.png","050505",0,0.9,intX,intY
		If intX > -1 And intY > -1 Then
//			TracePrint intX
//			TracePrint intY
			TracePrint "点击下一份"
			Tap intX, intY
			Delay 600
			
			KeepCapture 
			// 判断结束的标志
			TracePrint "开始检测是否最后一份"
			FindPic 0,0,0,0,"Attachment:最后结束.png","050505",0,0.9,intX,intY
			If intX > -1 And intY > -1 Then 
				KeepCapture 
				// 最后一份作业的提交
				FindPic 0,0,0,0,"Attachment:完成批改.png","000000",0,0.9,intX,intY
				If intX > -1 And intY > -1 Then
	//				TracePrint intX
	//				TracePrint intY
	//				Tap intX, intY
				End If
				ReleaseCapture 
				
				TracePrint "结束"
				
				Exit Do
			End If
			ReleaseCapture
			
			Delay 1400
			KeepCapture 
			// 确认发布按钮
			TracePrint "开始检测是否有评论"
			//FindPic 0,0,0,0,"Attachment:当前有评语.png","050505",0,0.9,intX,intY
			FindPic 0,0,0,0,"Attachment:不发布.png","050505",0,0.9,intX,intY
			If intX > -1 And intY > -1 Then 
				TracePrint "检测当前有评语"
				TracePrint intX
				TracePrint intY
				//Tap 158, 558
				Tap intX, intY
//				Tap intX, intY+110  // 不发布
				//Tap intX+230, intY+110  // 发布
				// 进入下一份作业，继续作业批改
				Delay 1000
				
				If dxk2 <> true Then 
					Call 学生作业提取()
				Else 
					Call 图片作业提取()
				End If
				
				Delay 1000
				Call 答案匹配()
				Delay 1000
				//Call 填写评价()
				Delay 1000
				Call 下一份()
				Delay 1000
			End If
			ReleaseCapture 
		End If
		ReleaseCapture
	Loop
End Function

// 简答题的关键词模糊匹配算法
Function 关键字模糊匹配算法()
	Dim i = 0
	// 循环每一个专业关键词
	While i <= UBOUND(gjc_zy) and i <= UBOUND(gjc_zy_tiqu)
		Dim temp_zy = gjc_zy(i) // 记录答案中的一条处理后的关键词串
		Dim temp_zy_tiqu = gjc_zy_tiqu(i) //记录学生作业中的一条处理后的关键词串
		
		// 将字符串分割成数组
		temp_zy = Split(temp_zy, ",") 
		temp_zy_tiqu = Split(temp_zy_tiqu, ",")
		
		Dim zy_num = 0 // 学生作业与答案专业关键词相同的个数
		Dim cy_num = 0 // 学生作业与答案常用关键词相同的个数
		
		// 对处理后的关键词进行匹配和统计数量
		For m = 0 To UBOUND(temp_zy)-1
			For n = 0 To UBOUND(temp_zy_tiqu)-1
				If StrComp(temp_zy(m), temp_zy_tiqu(n)) <> 0 Then // 如果学生专业关键词与答案不相同 
					//TracePrint ""
				Else 
					zy_num = zy_num + 1 // 否则个数加一
				End If
			Next
		Next
		
		Dim temp_cy = gjc_cy(i) // 记录答案中的一条处理后的常用词串
		Dim temp_cy_tiqu = gjc_cy_tiqu(i) //记录学生作业中的一条处理后的常用词串
		// 分隔成数组
		temp_cy = Split(temp_cy, ",")
		temp_cy_tiqu = Split(temp_cy_tiqu, ",")
		
		// 对处理后的常用关键词进行匹配和统计次数
		For m = 0 To UBOUND(temp_cy)-1
			For n = 0 To UBOUND(temp_cy_tiqu)-1
				If StrComp(temp_cy(m), temp_cy_tiqu(n)) <> 0 Then // 如果学生常用关键词与答案不相同 
//					TracePrint ""
				Else 
					cy_num = cy_num + 1 // 否则个数加一
				End If
			Next
		Next
		
		Dim len_zy = UBound(temp_zy) // 答案中专业关键词个数
		Dim len_cy = UBound(temp_cy) // 答案中常用关键词个数
		
		Dim xsl = (zy_num/len_zy)*0.8 + (cy_num/len_cy)*0.2 //计算相似率
		i = i + 1 // 下一个简答题
	Wend
End Function

// 检测QQ无响应情况，并作出处理反应
Function 无响应_等待()
	Do
//		TracePrint "检测无响应"
		KeepCapture 
		// 检测到出现“QQ无响应情况”
		FindPic 0,0,0,0,"Attachment:QQ无响应.png","000000",0,0.9,intX,intY
		If intX > -1 And intY > -1 Then
//			TracePrint intX
//			TracePrint intY
			// 点击等待按钮
			Tap intX + 255, intY + 130
		Else 
			KeepCapture 
			// 检测到主进程到最后结束
			FindPic 0,0,0,0,"Attachment:最后结束.png","050505",0,0.9,intX,intY
			If intX > -1 And intY > -1 Then
				TracePrint intX
				TracePrint intY
				//Tap intX, intY
				TracePrint "无响应检测结束"
				Exit Do
			End If
			ReleaseCapture
		End If
		ReleaseCapture
	Loop
End Function

// 检测QQ停止运行情况，并作出反应
Function 停止运行()
	Do
		// 检测到出现“QQ停止运行情况”
//		TracePrint "检测停止运行"
		KeepCapture 
		FindPic 0,0,0,0,"Attachment:停止运行.png","000000",0,0.9,intX,intY
		If intX > -1 And intY > -1 Then
//			TracePrint intX
//			TracePrint intY
			// 点击确认按钮
			Tap intX + 184, intY + 89
		Else 
			KeepCapture 
			// 检测到主进程到最后结束界面
			FindPic 0,0,0,0,"Attachment:最后结束.png","050505",0,0.9,intX,intY
			If intX > -1 And intY > -1 Then
//				TracePrint intX
//				TracePrint intY
				//Tap intX, intY
				TracePrint "停止运行检测结束"
				Exit Do
			End If
			ReleaseCapture
		End If
		ReleaseCapture 
	Loop
End Function

// 主函数
Function main()
	Call 进入作业页面()
	Delay 1000
	
	If dxk2 <> true Then 
		Call 学生作业提取()
	Else 
		Call 图片作业提取()
	End If
	Delay 1000
	TracePrint "提取答案显示"
	Call 提取答案显示()
	
	// 检测多选框是否被勾选
	If dxk1 <> false Then // 如果被勾选
		TracePrint "有答案文件"
		If daanming <> "" Then // 如果被勾选了，且答案文件名填写
			TracePrint daanming
			TracePrint "一切正常"
			Call 文件答案读取与处理()
			Delay 1000
			Call 标准答案显示()
			Call 答案匹配()
			Delay 1000
			Call 下一份()
			Delay 1000
		Else // 如果勾选了，但是没写答案文件名
			ShowMessage "填写答案文件名"
			Delay 2000
			ShowMessage "填写答案文件名"
			Delay 2000
			ShowMessage "填写答案文件名"
			Delay 2000
		End If
	Else // 如果没有勾选多选框
		TracePrint "无答案文件"
		Call 填写答案读取与处理()
		Delay 1000
		//Call 标准答案显示()
		Call 答案匹配()
		Delay 1000
		//Call 填写评价()
		Call 下一份()
		Delay 1000
	End If
End Function

// 进程一检测QQ无响应界面
Dim wuxiangy  = Thread.Start(无响应_等待)

// 进程二检测QQ停止运行界面
Dim tzyx  = Thread.Start(停止运行)

// 主进程
Call main()

Delay 1000
KeyPress "Back"
Delay 3000
KeyPress "Back"
Delay 3000
KeyPress "Back"
Delay 3000
KeyPress "Back"
Delay 5000
KeyPress "Back"
Delay 5000
KeyPress "Back"
Delay 3000
KeyPress "Back"
Delay 3000
KeyPress "Back"
Delay 3000
KeyPress "Home"

///////////////////////////////////////////////

界面1:
{
	关键信息:
	{
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"input1",
			提示内容:"课程群名",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"input2",
			提示内容:"指定路径下的答案文件名",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		多选框:
		{
			注释:"文字大小、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"多选框1",
			提示内容:"答案在指定文件夹下",
			点击响应:"函数名1",
			选中:true,
			文字大小:0,
			高度:0,
			宽度:0
		},
		多选框:
		{
			注释:"文字大小、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"多选框2",
			提示内容:"以图片形式提交",
			点击响应:"函数名2",
			选中:false,
			文字大小:0,
			高度:0,
			宽度:0
		},	
		文字框:
		{
			注释:"文字大小、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"文字框1",
			显示内容:"",
			文字大小:0,
			高度:0,
			宽度:0
		},	
		文字框:
		{
			注释:"文字大小、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"文字框2",
			显示内容:"",
			文字大小:0,
			高度:0,
			宽度:0
		},	
		文字框:
		{
			注释:"文字大小、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"文字框3",
			显示内容:"总分值100分",
			文字大小:16,
			高度:0,
			宽度:0
		},	
			
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"score1",
			提示内容:"选择题总分值",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"score2",
			提示内容:"填空题总分值",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"score3",
			提示内容:"简答题总分值",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
	
	},	
	答案填写:
	{
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"ans1",
			提示内容:"选择题(ABC...)",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"ans2",
			提示内容:"填空题(之间用逗号分隔)",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"ans3",
			提示内容:"简答题1",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"ans4",
			提示内容:"简答题2",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"ans5",
			提示内容:"简答题3",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"ans6",
			提示内容:"简答题4",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
		输入框:
		{
			注释:"初始文本、文字大小、最大输入长度、高度、宽度是可选属性，如需使用默认值，可保持值为0或直接删除此属性",
			名称:"ans7",
			提示内容:"简答题5",
			初始文本:"",
			仅输入数字:false,
			文字大小:0,
			最大输入长度:0,
			高度:0,
			宽度:400
		},	
	},	
}