def hanoi(n, source, auxiliary, target):
    # 基例
    if n > 0:
        # 步骤1：将n-1个盘子从source移动到auxiliary
        hanoi(n-1, source, target, auxiliary)
        
        # 打印移动过程
        print(f"将盘子 {n} 从 {source} 移动到 {target}")
        
        # 步骤3：将n-1个盘子从auxiliary移动到target
        hanoi(n-1, auxiliary, source, target)

# 调用函数，示例：移动3个盘子从A到C
hanoi(3, 'A', 'B', 'C')
