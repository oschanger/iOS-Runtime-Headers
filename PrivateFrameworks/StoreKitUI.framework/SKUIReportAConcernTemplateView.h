/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReportAConcernTemplateView : SKUIViewReuseView <SKUIViewElementView, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    UITextView * _commentView;
    BOOL  _commentViewElementPresent;
    NSString * _commentViewPlaceholder;
    UIColor * _commentViewTextColor;
    NSArray * _concerns;
    UITableView * _concernsTable;
    UIScrollView * _containerView;
    <SKUIReportAConcernTemplateViewDelegate> * _delegate;
    UIView * _dividerCommentBottom;
    UIView * _dividerCommentTop;
    UIView * _dividerConcernsBottom;
    UIView * _dividerConcernsTop;
    UIFont * _elementFont;
    UITextView * _headerView;
    int  _selectedIndex;
    UITextView * _titleView;
}

@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, retain) NSArray *concerns;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIReportAConcernTemplateViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int selectedIndex;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_dismissKeyboard;
- (void)_displayKeyboard;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_reloadSubviews;
- (void)_reloadTextView:(id)arg1 withViewElement:(id)arg2 andInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)_textForViewElement:(id)arg1;
- (void)cleanup:(id)arg1;
- (id)comment;
- (id)concerns;
- (void)dealloc;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (int)selectedIndex;
- (void)setConcerns:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end