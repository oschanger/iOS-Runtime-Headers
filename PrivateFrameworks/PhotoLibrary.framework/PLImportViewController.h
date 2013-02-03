/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImportSessionInfo, PLCameraImporter, PLImageTable, UIAlertView, NSMutableArray, NSTimer, PLEmptyAlbumView, UIBarButtonItem;

@interface PLImportViewController : UIViewController <PLCameraImporterDelegate, PLAlbumViewDataSource, PLAlbumViewDelegate> {
    NSUInteger _busyCount;
    UIAlertView *_confirmDupsAlert;
    NSTimer *_deletedItemsTimer;
    PLEmptyAlbumView *_emptyAlbumView;
    NSTimer *_icSleepPreventionTimer;
    NSUInteger _imageCount;
    UIBarButtonItem *_importAllBarButton;
    struct __CFUserNotification { } *_importCompleteNotification;
    NSMutableArray *_importItemThumbEntries;
    UIBarButtonItem *_importSelectedBarButton;
    PLImportSessionInfo *_importSessionInfo;
    PLCameraImporter *_importer;
    NSUInteger _lastUsedThumbEntry;
    UIAlertView *_notEnoughSpaceAlert;
    NSUInteger _otherCount;
    BOOL _readingImportItems;
    UIBarButtonItem *_stopImportBarButton;
    PLImageTable *_thumbStorage;
    NSUInteger _videoCount;
}

@property(retain) PLCameraImporter *importer;

- (void)_addEmptyAlbumViewWithError:(id)arg1;
- (void)_beginImportForItemAtIndex:(NSUInteger)arg1;
- (void)_beginImportSession;
- (void)_beginUninterruptibleOperation;
- (void)_cancelAlerts;
- (void)_checkDiskSpaceForImportIndexes:(id)arg1;
- (void)_cleanUpAfterImport;
- (struct CGImage { }*)_createGenericThumbnailForImportItem:(id)arg1;
- (id)_deletableIndexesOfItemsAtIndexes:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)_deletedItemsTimerFired:(id)arg1;
- (void)_endImport;
- (void)_endUninterruptibleOperation;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)_icSleepPreventionTimerFired:(id)arg1;
- (id)_localizedCameraName;
- (id)_localizedDeviceType;
- (void)_photosDatabaseHasChanged:(id)arg1;
- (void)_resetDuplicateBadgesForceDatabaseCheck:(BOOL)arg1;
- (void)_resetThumbnailTracking;
- (void)_setThumbnailEntryForImportItem:(id)arg1 atImportItemIndex:(NSUInteger)arg2;
- (void)_setupNavigationItem;
- (id)_textBadgeStringForCameraItem:(id)arg1;
- (id)_thumbnailPathString;
- (void)albumView:(id)arg1 imageCount:(NSUInteger*)arg2 videoCount:(NSUInteger*)arg3 otherCount:(NSUInteger*)arg4;
- (id)albumView:(id)arg1 imageDataForPhotoAtIndex:(NSUInteger)arg2 imageWidth:(NSInteger*)arg3 imageHeight:(NSInteger*)arg4 bytesPerRow:(NSInteger*)arg5 dataWidth:(NSInteger*)arg6 dataHeight:(NSInteger*)arg7 imageDataOffset:(NSInteger*)arg8;
- (id)albumView:(id)arg1 textBadgeForPhotoAtIndex:(NSUInteger)arg2;
- (void)albumViewSelectionDidChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long)arg2;
- (void)importAll;
- (id)importDevice;
- (void)importSelected;
- (void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(NSInteger)arg3 error:(id)arg4;
- (void)importer:(id)arg1 didCompleteImportForItems:(id)arg2;
- (void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2;
- (void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didRemoveImportItem:(id)arg2 atIndex:(NSUInteger)arg3;
- (id)importer;
- (void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2;
- (id)init;
- (BOOL)isBusy;
- (BOOL)isImporting;
- (void)loadView;
- (NSUInteger)numberOfPhotosForAlbumView:(id)arg1;
- (void)setImportDevice:(id)arg1;
- (void)setImporter:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)stopImport;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;

@end
