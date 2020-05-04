# video_frame_handle
qtopencv视频拆分为图片帧，帧合成视频（mp4，avi）

拆帧分为三种模式：

 - 自定义拆帧（指定开始时刻和结束时刻，并拆分为图片帧）
 - 等长拆帧   （间隔一定时长，将每段时长视频帧进行拆分）
 - 截取单帧 （截取某个时刻的画面帧）
 - 视频合成 （将某一文件夹下的图片合成为视频支持avi，mp4）

## 一，加载视频
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200504161945206.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM4NDQxNjky,size_16,color_FFFFFF,t_70)

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200504161957928.gif)
## 二，自定义拆帧
![帧合成视频](https://img-blog.csdnimg.cn/20200504155215978.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM4NDQxNjky,size_16,color_FFFFFF,t_70)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200504162035441.gif)
## 三，等时长拆帧

![等时长拆帧](https://img-blog.csdnimg.cn/20200504155150973.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM4NDQxNjky,size_16,color_FFFFFF,t_70)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200504162114639.gif)
## 四，截取单帧
![截取单帧](https://img-blog.csdnimg.cn/20200504155152545.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM4NDQxNjky,size_16,color_FFFFFF,t_70)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200504162131657.gif)
## 五，帧合成视频

![自定义时长拆帧](https://img-blog.csdnimg.cn/20200504155200606.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM4NDQxNjky,size_16,color_FFFFFF,t_70)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200504162635130.gif)
