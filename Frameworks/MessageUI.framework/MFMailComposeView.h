/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeMultiView, NSInvocation, _MFComposeRecipientView, UINavigationItem, UIPickerView, MFComposeBodyField, MFComposeScrollView, <MFMailPopoverManagerDelegate>, MFComposeFromView, MFContactsSearchManager, UITableView, NSNumber, UITextContentView, <MFMailComposeViewDelegate>, MFComposeImageSizeView, UIBarButtonItem, MFFromAddressViewController, MFComposeRecipientAtom, UIToolbar, UIKeyboard, UIResponder, MFComposeSubjectView, MFContactsSearchResultsModel, ABPeoplePickerNavigationController, UIView;

@interface MFMailComposeView : UITransitionView <UITextContentViewDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MFContactsSearchConsumer, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, MFComposeBodyFieldDelegate, _MFComposeRecipientViewDelegate> {
    unsigned int _scheduledDeferedProgressMonitoring : 1;
    unsigned int _toHeightChanging : 1;
    unsigned int _ccHeightChanging : 1;
    unsigned int _pinToBottomOfHeaderView : 1;
    unsigned int _changingRecipients : 1;
    unsigned int _isLoading : 1;
    unsigned int _multiFieldOverride : 1;
    unsigned int _isShowingPeoplePicker : 1;
    unsigned int _pendingMultiFieldOverride : 1;
    unsigned int _isRotating : 1;
    unsigned int _isClosing : 1;
    unsigned int _isShowingFromAddressPickerWheel : 1;
    unsigned int _isShowingImageResizingBar : 1;
    _MFComposeRecipientView *_activeRecipientView;
    BOOL _animationDisabled;
    _MFComposeRecipientView *_bccField;
    MFComposeBodyField *_bodyField;
    MFComposeScrollView *_bodyScroller;
    _MFComposeRecipientView *_ccField;
    SEL _closeAction;
    UIBarButtonItem *_closeButtonItem;
    id _closeTarget;
    MFContactsSearchManager *_contactsSearchActor;
    UIView *_contentView;
    NSInvocation *_delayedPopoverInvocation;
    SEL _dismissPeoplePickerAction;
    id _dismissPeoplePickerTarget;
    SEL _dismissPersonCardAction;
    id _dismissPersonCardTarget;
    float _finalCCHeight;
    float _finalToHeight;
    UIResponder *_firstResponderBeforeSheet;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    MFComposeFromView *_fromField;
    UIView *_headerView;
    MFComposeImageSizeView *_imageSizeField;
    BOOL _isForEditing;
    UIKeyboard *_keyboard;
    UIToolbar *_keyboardButtonBar;
    _MFComposeRecipientView *_lastChangedRecipientView;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    MFComposeMultiView *_multiField;
    UINavigationItem *_navigationItem;
    NSInteger _nextOrientation;
    float _offsetBeforeSearch;
    NSUInteger _options;
    ABPeoplePickerNavigationController *_peoplePicker;
    UIResponder *_pinningResponder;
    <MFMailPopoverManagerDelegate> *_popoverOwner;
    SEL _presentPeoplePickerAction;
    id _presentPeoplePickerTarget;
    SEL _presentPersonCardAction;
    id _presentPersonCardTarget;
    MFComposeRecipientAtom *_savedAddressAtom;
    MFContactsSearchResultsModel *_searchResultsModel;
    UITableView *_searchResultsTable;
    NSNumber *_searchTaskID;
    SEL _sendAction;
    UIBarButtonItem *_sendButtonItem;
    id _sendTarget;
    UIView *_shadowView;
    MFComposeSubjectView *_subjectField;
    UITextContentView *_textView;
    _MFComposeRecipientView *_toField;
}

@property <MFMailComposeViewDelegate> *composeViewDelegate;
@property(retain) NSNumber *searchTaskID;
@property BOOL isForEditing;

+ (void)_initializeSafeCategory;

- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (void)_cancelDelayedPopover;
- (void)_closeButtonClicked:(id)arg1;
- (void)_collectKeyViews:(id)arg1;
- (void)_finishUpRotationToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)_fixUpView:(id)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForFromAddressPicker;
- (void)_getLabel:(id*)arg1 andAccountDescription:(id*)arg2 currentScaleImageSize:(id*)arg3 forState:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; })arg4;
- (float)_heightForBottomView;
- (void)_keyboardAnimationCompleted;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardFrameForInterfaceOrientation:(NSInteger)arg1 orderedIn:(BOOL)arg2;
- (void)_keyboardHideCompleted;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3 searchResultsWereDismissed:(BOOL)arg4;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_multiFieldClicked;
- (void)_positionKeyboardForInterfaceOrientation:(NSInteger)arg1 orderedIn:(BOOL)arg2;
- (void)_presentDelayedPopover;
- (id)_searchResultsTable;
- (void)_sendButtonClicked:(id)arg1;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 wasSearching:(BOOL)arg5;
- (void)_setupField:(id)arg1 isNew:(BOOL)arg2 changingView:(id)arg3 toSize:(struct CGSize { float x1; float x2; })arg4 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 visible:(BOOL)arg6;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 property:(NSInteger)arg4 changingView:(id)arg5 toSize:(struct CGSize { float x1; float x2; })arg6 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg7 visible:(BOOL)arg8;
- (void)_setupFromFieldChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 visible:(BOOL)arg4;
- (void)_setupImageSizeFieldChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 visible:(BOOL)arg4;
- (void)_setupMultiFieldWithState:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; })arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (void)_setupSubjectField:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (NSInteger)activeAddressField;
- (BOOL)allowSend;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (id)bccField;
- (void)beganNetworkActivity;
- (id)bodyField;
- (id)bodyScroller;
- (id)bodyTextView;
- (id)bottomView;
- (id)ccField;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldDidFinishLoadForFrame:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeHeaderViewClicked:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(NSInteger)arg3;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(NSInteger)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewDidResignFirstResponder:(id)arg1;
- (BOOL)composeRecipientViewIsShowingPeoplePicker:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)composeRecipientViewWillBecomeFirstResponder:(id)arg1;
- (id)composeViewDelegate;
- (void)consumeSearchResults:(id)arg1 type:(NSInteger)arg2 taskID:(id)arg3;
- (void)dealloc;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)dismissAlertSheet:(id)arg1 animate:(BOOL)arg2 willClose:(BOOL)arg3;
- (void)dismissPeoplePicker;
- (void)dismissPersonCard;
- (void)displayAlertSheet:(id)arg1;
- (BOOL)endEditing:(BOOL)arg1;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(NSInteger)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (id)fromField;
- (void)getOptionalFieldState:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; }*)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageSizeField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 navigationItem:(id)arg2 options:(NSUInteger)arg3 delegate:(id)arg4;
- (BOOL)isForEditing;
- (BOOL)isFromAddressPickerVisible;
- (BOOL)isKeyboardVisible;
- (BOOL)isLoading;
- (id)keyboard;
- (void)layoutSubviews;
- (id)multiField;
- (void)parentDidClose;
- (void)parentWillClose;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)popoverControllerDidDismiss:(id)arg1;
- (void)presentPersonCardViewController:(id)arg1 fromView:(id)arg2;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)restoreFirstResponder;
- (void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)saveFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollerDidScroll:(id)arg1;
- (void)searchResultsPopoverWasDismissed;
- (id)searchTaskID;
- (void)setAnimationDisabled:(BOOL)arg1;
- (void)setAutoresizingMask:(NSUInteger)arg1;
- (void)setCloseTarget:(id)arg1 action:(SEL)arg2;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setDismissPeoplePickerTarget:(id)arg1 action:(SEL)arg2;
- (void)setDismissPersonCardTarget:(id)arg1 action:(SEL)arg2;
- (void)setEnabled:(BOOL)arg1 changingUI:(BOOL)arg2;
- (void)setFromAddressPickerVisible:(BOOL)arg1;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (void)setIsForEditing:(BOOL)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setNavigationBarTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setPopoverOwner:(id)arg1;
- (void)setPresentPeoplePickerTarget:(id)arg1 action:(SEL)arg2;
- (void)setPresentPersonCardTarget:(id)arg1 action:(SEL)arg2;
- (void)setScrollsToTop:(BOOL)arg1;
- (void)setSearchTaskID:(id)arg1;
- (void)setSendEnabled:(BOOL)arg1 closeEnabled:(BOOL)arg2;
- (void)setSendEnabled:(BOOL)arg1;
- (void)setSendTarget:(id)arg1 action:(SEL)arg2;
- (void)setToolbarButtonsEnabled:(BOOL)arg1;
- (id)subjectField;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { float x1; float x2; })arg2;
- (id)toField;
- (void)toggleImageSizeFieldIfNecessary;
- (void)transitionViewDidComplete:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
