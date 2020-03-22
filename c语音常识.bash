#c语言最好的学习例子就是烽火的代码

.h 是头文件，一般存放 函数的声明，数组 ，和定义的变量
.c是源文件，是实现 函数程序 的功能


i++是先把i的值拿来用,然后在自增1
++i是想把i自增1然后拿来用

比如:
for(i=0;i<10;i++)
i先使用,用完最后在i++
for(i=0;i<10;++i)
i先自增,然后再用

https://github.com/karottc/linux-0.11.git #c语言有注释的linux源码

https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git #最新的Linux源码

GB2312 #编码语言，一般是这个 遇到特殊，修改为utf-8

C语言'\0'的含义

’\0’是判定字符数组结束的标识，表示这串字符到结尾了；

注意：在字符数组中’\0’是占一个位置的！

例如 定义char c[6]=“hello”，而在内存中字符数组 c 则是"hello\0"；

即’\0’在数组中占有空间却不被我们看到；

所以如果一个长度为10的字符串要放在字符数组里的话就应该把字符数组的长度定义为11；



#undef 在后面取消已经定义的宏定义

strtok_r #字符串分割函数
uint 无符号整型

__FILE__:用来指示本行语句所在源文件的文件名

当用C++编译程序编译时，标识符__cplusplus就会被定义

当要求程序严格遵循ANSIC标准时，标识符__STDC__就会被赋值为1；

sprintf: 字符串格式化命令，把格式化的数据写入到字符中

snprintf:这个函数对写入的字符数做出了限制

int snprintf(char *str, int n, char *format[,argument,...]);
str——要写入的字符串
n——要写入的字符的最大数目，超过n会被截断，format为格式化字符串，
sprintf_help()
{
1、%d 十进制有符号整数。

2、%u 十进制无符号整数。

3、%ld 输出long整数 。

4、%s 字符串。

5、%c 单个字符。

6、%p 指针的值。

7、%e 指数形式的浮点数。

8、%x, %X 无符号以十六进制表示的整数。

9、%0 无符号以八进制表示的整数。

10、%g 自动选择合适的表示法。
}
process_list()
{
	#false表示异步执行，true表示同步执行
	dev_mgm_debug,ready:[false],cmd:[dev_mgm_debug flk_specific &];
}

memset(void *s,int ch, size_t n);
初始化函数，将s中当前位置后面的n个字节，用ch替换并返回s
作用：将其中的一块内存中的内容全部设置为指定的值，这个函数通常为新申请的内存做初始化工作
#C 库函数 
int snprintf(char *str, size_t size, const char *format, ...) 设将可变参数(...)按照 format 格式化成字符串，并将字符串复制到 str 中，size 为要写入的字符的最大数目，超过 size 会被截断
# strncpy(char *dest, const char *src, int n)
把src所指向的字符串中以src地址开始的前n个字节复制到dest所指向 的数组中，并返回被复制后的dest

#strncmp
strncmp(pA, "http://", strlen("http://")) http://与pA相比较，如果包含则返回0，大于则大于0，小于则小于0

#strstr(str1,str2) 
函数用于判断字符串str2是否是str1的子串。如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL。

sscanf(argv[7], "%lld", &file_length); #从指定字符串中读取与指定格式相符的数据
fscanf(stream, "%s", DatapathID)  #以%s格式，从stream中读取数据，存到DatapathID
 
 for (；；)指令少，不占用寄存器，而且没有判断跳转，比while (1)好  # 都是死循环

#bzero(void *s,int n) 
前n个字节为零且包括"\0"
#无符号版本和有符号版本的区别就是无符号类型能保存2倍于有符号类型的数据
#socket(int domin,int type,int protocol)
协议族，协议类型，协议编号 的套接字文件描述符
#sendto(socket s,const void * msg,int len,unsigned int flags, const struct sockaddr * to, int tolen);
从指定 的socket传给对方主机，
参数s为已经建好连线的socket ,
参数msg指向欲连线的数据内容
参数to用来指定欲传送的网络地址
 
 天翼10G 3.0 浙江版本集成测试
发现问题：
设备升级异常，saf进程启动异常
# “long long int”
在C语言中是64位长整型数据类型。

# argc、argv的具体含义 
        argc和argv参数在用命令行编译程序时有用。main( int argc, char* argv[], char **env ) 中 
        第一个参数，int型的argc，为整型，用来统计程序运行时发送给main函数的命令行参数的个数，在VS中默认值为1。 
        第二个参数，char*型的argv[]，为字符串数组，用来存放指向的字符串参数的指针数组，每一个元素指向一个参数。各成员含义如下： 
        argv[0]指向程序运行的全路径名 
        argv[1]指向在DOS命令行中执行程序名后的第一个字符串 
        argv[2]指向执行程序名后的第二个字符串 
        argv[3]指向执行程序名后的第三个字符串 
        argv[argc]为NULL 
        第三个参数，char**型的env，为字符串数组。env[]的每一个元素都包含ENVVAR=value形式的字符串，其中ENVVAR为环境变量，value为其对应的值。平时使用到的比较少
		
# char * strncat(char *dest, const char *src, size_t n);
把src所指字符串的前n个字符添加到dest所指字符串的结尾处，并覆盖dest所指字符串结尾的'\0'，从而实现字符串的连接。

#fgets函数
功能为从指定的流中读取数据，每次读取一行。其原型为：char *fgets(char *str, int n, FILE *stream);从指定的流 stream 读取一行，并把它存储在 str 所指向的字符串内。当读取 (n-1) 个字符时，或者读取到换行符时，或者到达文件末尾时，它会停止，具体视情况而定。

#long long int
在C语言中是64位长整型数据类型

#strtok("abc,def,ghi",",")，
最后可以分割成为abc def ghi.尤其在点分十进制的IP中提取应用较多。