/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {
    NSIndexPath * _indexPath;
    BOOL  _managesViewControllerContainerViewLayout;
    double  _maximumContentWidth;
    SKUIViewControllerContainerView * _viewControllerContainerView;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic) BOOL managesViewControllerContainerViewLayout;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, readonly) UIView *viewControllerContainerView;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)indexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)managesViewControllerContainerViewLayout;
- (float)maximumContentWidth;
- (void)setManagesViewControllerContainerViewLayout:(BOOL)arg1;
- (void)setMaximumContentWidth:(float)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (id)viewControllerContainerView;

@end