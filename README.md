# raw2pts

Raw file 2 point cloud file，用于转化 C2 激光点云相机源数据为点云文件。

GitHub: <https://github.com/district10/raw2pts>

## Compile

just `make`

## Usage

Sample data

  * demo.raw: <http://gnat.qiniudn.com/raw2pts/demo.raw>
  * demo.txt: <http://gnat.qiniudn.com/raw2pts/demo.txt>

manual:

```shell
$ raw2pts demo.raw demo.txt
```

automated:

把 C2 相机源数据放到 input 文件夹，然后双击 `make.sh`，
相应点云文件回自动输出到 `output` 文件夹。

## 效果

用 CloudCompare 打开点云文件：

![](http://gnat.qiniudn.com/raw2pts/demo.png)

## Binary Release

raw2pts.exe: <http://gnat.qiniudn.com/raw2pts/raw2pts.exe>

## License

MIT
