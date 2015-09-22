# raw2pts
Raw file 2 point cloud file


## Compile

``` shell
$ gcc raw2pts.c -o raw2pts
```

## Run

``` shell
$ raw2pts demo.raw demo.txt
```

* demo.raw: <http://gnat.qiniudn.com/raw2pts/demo.raw>
* demo.txt: <http://gnat.qiniudn.com/raw2pts/demo.txt>

![](http://gnat.qiniudn.com/raw2pts/demo.png)

## Binary Release

raw2pts.exe: <http://gnat.qiniudn.com/raw2pts/raw2pts.exe>

## Utils

把 `raw2pts.exe` 放到根目录。

把 `raw` 文件放到 batch 文件夹，双击 `batch.sh`，可以批量转化。

把 `txt` 文件放到 merge 文件夹，双击 `merge.sh`，可以合并点云。

（Windows 系统上需要安装 git bash。）
