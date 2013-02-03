/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIBarButtonItem, UIDocumentInteractionController;

@interface QLPopOverState : NSObject <UIDocumentInteractionControllerDelegate, UIPrintInteractionControllerDelegate> {
    UIBarButtonItem *_barButtonItem;
    id _delegate;
    UIDocumentInteractionController *_documentInteractionController;
    BOOL _inRotation;
    NSInteger _popOverState;
}

@property NSInteger popOverState;

- (void)dealloc;
- (void)didRotate;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (BOOL)documentInteractionController:(id)arg1 canPerformAction:(SEL)arg2;
- (BOOL)documentInteractionController:(id)arg1 performAction:(SEL)arg2;
- (void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (id)initWithDocumentInteractionController:(id)arg1 delegate:(id)arg2;
- (NSInteger)popOverState;
- (void)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
- (void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
- (void)setPopOverState:(NSInteger)arg1;
- (void)willRotate;

@end
