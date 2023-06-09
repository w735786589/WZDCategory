//
//  NSArray+Masonry.h
//  Haidaisi
//
//  Created by ybd on 2019/8/24.
//  Copyright © 2019 乙丙丁软件. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Masonry/Masonry.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Masonry)

/**
 *  九宫格布局 固定ItemSize 固定ItemSpacing
 *  可由九宫格的内容控制SuperView的大小
 *  如果warpCount大于[self count]，该方法将会用空白的View填充到superview中
 *
 *  @param fixedItemWidth        固定宽度，如果设置成0，则表示自适应
 *  @param fixedItemHeight       固定高度，如果设置成0，则表示自适应
 *  @param fixedLineSpacing      行间距
 *  @param fixedInteritemSpacing 列间距
 *  @param warpCount             折行点
 *  @param topSpacing            顶间距
 *  @param bottomSpacing         底间距
 *  @param leadSpacing           左间距
 *  @param tailSpacing           右间距
 *
 *  @return 一般情况下会返回[self copy], 如果warpCount大于[self count]，则会返回一个被空白view填充过的数组，可以让你循环调用removeFromSuperview或者干一些其他的事情;
 */

- (NSArray *)mas_distributeSudokuViewsWithFixedItemWidth:(CGFloat)fixedItemWidth
                                         fixedItemHeight:(CGFloat)fixedItemHeight
                                        fixedLineSpacing:(CGFloat)fixedLineSpacing
                                   fixedInteritemSpacing:(CGFloat)fixedInteritemSpacing
                                               warpCount:(NSInteger)warpCount
                                              topSpacing:(CGFloat)topSpacing
                                           bottomSpacing:(CGFloat)bottomSpacing
                                             leadSpacing:(CGFloat)leadSpacing
                                             tailSpacing:(CGFloat)tailSpacing;

/**
 *  九宫格布局 固定ItemSize 可变ItemSpacing
 *
 *  @param fixedItemWidth  固定宽度
 *  @param fixedItemHeight 固定高度
 *  @param warpCount       折行点
 *  @param topSpacing      顶间距
 *  @param bottomSpacing   底间距
 *  @param leadSpacing     左间距
 *  @param tailSpacing     右间距
 */
- (void)mas_distributeSudokuViewsWithFixedItemWidth:(CGFloat)fixedItemWidth
                                    fixedItemHeight:(CGFloat)fixedItemHeight
                                          warpCount:(NSInteger)warpCount
                                         topSpacing:(CGFloat)topSpacing
                                      bottomSpacing:(CGFloat)bottomSpacing
                                        leadSpacing:(CGFloat)leadSpacing
                                        tailSpacing:(CGFloat)tailSpacing;

@end

NS_ASSUME_NONNULL_END
