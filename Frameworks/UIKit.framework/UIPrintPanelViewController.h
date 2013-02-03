/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, UIPrintPanelTableViewController, UIPrintInteractionController, PKPrinter, UIViewController, UIPopoverController, UINavigationController;

@interface UIPrintPanelViewController : NSObject {
    BOOL _dismissed;
    UINavigationController *_navigationController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIPrintInteractionController *_printInteractionController;
    PKPrinter *_printer;
    UIPrintPanelTableViewController *_tableViewController;
    UIWindow *_window;
}

@property(retain) PKPrinter *printer;
@property NSInteger copies;
@property BOOL duplex;
@property(readonly) NSInteger pageCount;
@property _NSRange pageRange;
@property(readonly) BOOL showDuplex;
@property(readonly) BOOL showPageRange;

+ (void)_initializeSafeCategory;

- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)cancelPrinting;
- (void)controllerDidDisappear;
- (NSInteger)copies;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)duplex;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (NSInteger)pageCount;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })pageRange;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrintPanelAnimated:(BOOL)arg1;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (id)printer;
- (void)setCopies:(NSInteger)arg1;
- (void)setDuplex:(BOOL)arg1;
- (void)setPageRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setPrinter:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (BOOL)showDuplex;
- (BOOL)showPageRange;
- (void)startPrinting;

@end
