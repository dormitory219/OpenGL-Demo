//
//  CJLShaderTypes.h
//  01_Metal_Hello
//
//  Created by - on 2020/8/20.
//  Copyright © 2020 CJL. All rights reserved.
//

//C 与OC 之间产生桥接关系

/*
 介绍:
 头文件包含了 Metal shaders 与C/OBJC 源之间共享的类型和枚举常数
*/

#ifndef CJLShaderTypes_h
#define CJLShaderTypes_h

// 缓存区索引值 共享与 shader 和 C 代码 为了确保Metal Shader缓存区索引能够匹配 Metal API Buffer 设置的集合调用，相当于OpenGL ES中GLSL文件中position参数名称，即入口
//数据传递时的房间号，metal中表示index，类似于GLSL中的getAttribLocation、getUniformLocation
typedef enum CJLVertexInputIndex
{
//    顶点
    CJLVertexInputIndexVertices = 0,
    
//    视图大小
    CJLVertexInputIndexViewportSize = 1,
    
}CJLVertexInputIndex;


//纹理索引：用于往片元着色器传递纹理数据的索引
typedef enum CJLTextureIndex
{
    CJLTextureIndexBaseColor = 0
    
}CJLTextureIndex;

//顶点数据结构体:顶点/颜色值
typedef struct
{
//    像素空间的位置
//    像素中心点（100，100）
//    顶点坐标
    vector_float2 position;
    
//    2D 纹理
//    纹理坐标
    vector_float2 textureCoordinate;
    
}CJLVertex;

#endif /* CJLShaderTypes_h */
