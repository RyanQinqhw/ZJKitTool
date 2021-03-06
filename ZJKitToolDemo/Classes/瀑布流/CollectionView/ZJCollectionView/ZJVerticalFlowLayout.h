//
//  ZJVerticalFlowLayout.h
//  ZJUIKit
//
//  Created by dzj on 2018/1/30.
//  Copyright © 2018年 kapokcloud. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZJVerticalFlowLayout;

@protocol ZJVerticalFlowLayoutDelegate <NSObject>

@required
/**
 *  要求实现
 *
 *  @param waterflowLayout 哪个布局需要代理返回高度
 *  @param  indexPath          对应的cell, 的indexPath, 但是indexPath.section == 0
 *  @param itemWidth           layout内部计算的宽度
 *
 *  @return 需要代理高度对应的cell的高度
 */
- (CGFloat)zj_waterflowLayout:(ZJVerticalFlowLayout *)waterflowLayout collectionView:(UICollectionView *)collectionView heightForItemAtIndexPath:(NSIndexPath *)indexPath itemWidth:(CGFloat)itemWidth;

@optional



/**
 * 需要显示的列数, 默认3

 @param waterflowLayout ZJVerticalFlowLayout
 @param collectionView collectionView
 @return 列数
 */
- (NSInteger)zj_waterflowLayout:(ZJVerticalFlowLayout *)waterflowLayout columnsInCollectionView:(UICollectionView *)collectionView;


/**
 * 列间距, 默认10

 @param waterflowLayout ZJVerticalFlowLayout
 @param collectionView collectionView
 @return 列间距
 */
- (CGFloat)zj_waterflowLayout:(ZJVerticalFlowLayout *)waterflowLayout columnsMarginInCollectionView:(UICollectionView *)collectionView;

/**
 * 行间距, 默认10
 
 @param waterflowLayout ZJVerticalFlowLayout
 @param collectionView collectionView
 @return 行间距
 */
- (CGFloat)zj_waterflowLayout:(ZJVerticalFlowLayout *)waterflowLayout collectionView:(UICollectionView *)collectionView linesMarginForItemAtIndexPath:(NSIndexPath *)indexPath;



/**
 * 距离collectionView四周的间距, 默认{20, 10, 10, 10}

 @param waterflowLayout ZJVerticalFlowLayout
 @param collectionView collectionView
 @return  UIEdgeInsets
 */
- (UIEdgeInsets)zj_waterflowLayout:(ZJVerticalFlowLayout *)waterflowLayout edgeInsetsInCollectionView:(UICollectionView *)collectionView;

@end

@interface ZJVerticalFlowLayout : UICollectionViewLayout


/**
 *  layout的代理
 */

- (instancetype)initWithDelegate:(id<ZJVerticalFlowLayoutDelegate>)delegate;

+ (instancetype)flowLayoutWithDelegate:(id<ZJVerticalFlowLayoutDelegate>)delegate;

@end
