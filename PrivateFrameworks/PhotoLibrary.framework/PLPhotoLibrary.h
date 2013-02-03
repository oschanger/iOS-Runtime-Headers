/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLThumbnailManager, NSCalendar, NSIndexSet, PLConnection, PLPhotoAlbum, PLCameraAlbum, NSDictionary, PLWStackedImageCache;

@interface PLPhotoLibrary : MLPhotoLibrary {
    PLPhotoAlbum *_allImportedPhotosAlbum;
    struct __CFDictionary { } *_allPhotos;
    PLPhotoAlbum *_allPhotosAlbum;
    PLConnection *_connection;
    NSInteger _databaseMigrationKind;
    NSCalendar *_exifConversionCalendar;
    NSDictionary *_existingThumbnailEntries;
    NSIndexSet *_existingThumbnailIndexes;
    PLPhotoAlbum *_lastImportedPhotosAlbum;
    double _lastRemoteDataModification;
    BOOL _listeningForITunesSyncing;
    id _ptpDelegate;
    BOOL _readOnly;
    PLCameraAlbum *_savedPhotosAlbum;
    PLWStackedImageCache *_stackedImageCache;
    PLThumbnailManager *_thumbnailManager;
}

+ (void)_presentSqliteCorruptionErrorDialog;
+ (id)allIndicatorFilePaths;
+ (id)anotherUid;
+ (BOOL)cameraRollNeedsMigration;
+ (long)creationDate:(id*)arg1 latitude:(double*)arg2 longitude:(double*)arg3 fromVideo:(id)arg4;
+ (id)dcimDirectory;
+ (id)dcimDirectoryPath;
+ (id)iTunesPhotosDirectory;
+ (id)imageWriterIndicatorFilePath;
+ (BOOL)isReadOnly;
+ (id)migrationIndicatorFilePath;
+ (BOOL)needsThumbnailMigration;
+ (BOOL)needsToRegenerateVideoThumbnailsForConnection:(id)arg1;
+ (id)photoDataDirectory;
+ (id)photoDataMiscDirectory;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (id)savedPhotosAlbum;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
+ (id)sharedPhotoLibraryIfExists;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;

- (void)_addPhoto:(id)arg1 toEvent:(id)arg2;
- (void)_attachAuxDatabase;
- (void)_closeDatabaseConnection;
- (void)_compactThumbnailTablesIfNecessary;
- (void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)_detachAuxDatabase;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (id)_imagesForAlbum:(id)arg1 firstImageOnly:(BOOL)arg2;
- (void)_loadExistingThumbnailEntries;
- (void)_loadPhotoLibraryAfterMigration;
- (void)_migrationDidFinish;
- (NSInteger)_nextAvailableThumbnailIndex;
- (void)_notifyChangedPhotos:(id)arg1;
- (void)_notifyPTPAboutAddedPhoto:(id)arg1;
- (void)_notifyPTPAboutDeletedPhoto:(id)arg1;
- (void)_notifyPTPAboutPhotoLibraryAvailable:(BOOL)arg1;
- (void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
- (void)_notifyProgress:(float)arg1;
- (void)_notifyRebuildProgressOnMainThread:(id)arg1;
- (id)_occupiedThumbnailIndexes;
- (NSInteger)_orientationAfterRotatingOrientation:(NSInteger)arg1 clockwiseByDegrees:(NSInteger)arg2 transposeCoordinatesOut:(BOOL*)arg3;
- (NSInteger)_orientationOfFileAtPath:(id)arg1;
- (void)_photoAlbumChanged:(id)arg1;
- (void)_removeOrphanedThumbnailEntries;
- (id)_setPhotoAtPath:(id)arg1 toOrientation:(NSInteger)arg2;
- (NSInteger)_sortingCategoryForAlbum:(id)arg1;
- (void)_unloadExistingThumbnailEntries;
- (id)addDCIMEntryAtPath:(id)arg1 toEvent:(id)arg2 extensions:(id)arg3 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg4 notify:(BOOL)arg5 importSessionIdentifier:(NSInteger)arg6 isImported:(BOOL)arg7 gatherVideoInformation:(BOOL)arg8 previewImage:(id)arg9 thumbnailImage:(id)arg10;
- (void)addPhoto:(id)arg1 toAlbumsAndEvent:(id)arg2 invalidateStackedImageForEvent:(BOOL)arg3;
- (id)albums;
- (id)albumsForContentMode:(NSInteger)arg1;
- (id)allImportedPhotosAlbum;
- (id)allPhotosAlbum;
- (id)allPhotosAlbumIfExists;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetURLForPhoto:(id)arg1;
- (id)connection;
- (id)countOfAllPhotosAndVideos;
- (id)createEvent:(id)arg1;
- (id)createImageForDulcimerImage:(id)arg1 format:(NSInteger)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (id)createImageForDulcimerImage:(id)arg1 format:(NSInteger)arg2;
- (id)dataForPhoto:(id)arg1 format:(NSInteger)arg2 width:(NSInteger*)arg3 height:(NSInteger*)arg4 bytesPerRow:(NSInteger*)arg5 dataWidth:(NSInteger*)arg6 dataHeight:(NSInteger*)arg7 imageDataOffset:(NSInteger*)arg8;
- (id)dateForPhoto:(id)arg1;
- (void)dealloc;
- (void)deleteAllImages;
- (void)deleteImageAtIndex:(NSInteger)arg1 fromAlbum:(id)arg2;
- (void)deleteImages:(id)arg1;
- (void)deleteImagesAtIndexes:(id)arg1 fromAlbum:(id)arg2;
- (BOOL)deleteImagesWithKeys:(id)arg1;
- (id)eventAlbumContainingPhoto:(id)arg1;
- (id)exifStringForDate:(id)arg1;
- (id)fileExtensionsForPhoto:(id)arg1;
- (void)finishVideoMigration;
- (void)flushAlbums;
- (void)flushDCIMAlbums;
- (void)fullDcimMigration;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (BOOL)hasDelegateAndValidDatabase;
- (BOOL)hasPhotoWithCaptureDate:(id)arg1 fileName:(id)arg2 fileSize:(NSInteger)arg3;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(NSInteger)arg3;
- (id)iTunesFaceImageForRecordID:(NSInteger)arg1 faceIndex:(NSInteger)arg2 size:(struct CGSize { float x1; float x2; })arg3 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (void)iTunesSyncPhaseDidFinish:(NSInteger)arg1 reason:(NSInteger)arg2;
- (void)iTunesSyncPhaseWillStart:(NSInteger)arg1;
- (id)imageForFormat:(NSInteger)arg1 forImage:(id)arg2;
- (id)init;
- (void)initializeGraphicsServices;
- (void)insertAlbum:(id)arg1 intoSortedAlbums:(id)arg2;
- (BOOL)isPhotoInSavedPhotosAlbum:(id)arg1;
- (id)lastImportedPhotosAlbum;
- (BOOL)libraryIsAvailable;
- (void)listenForITunesSyncing;
- (void)loadDatabaseCreateForMigration:(BOOL)arg1;
- (void)migrateDcimToDatabase;
- (void)migrateSavedPhotoCaptureTimes;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (void)modifyDCIMEntryForVideo:(id)arg1 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg2 previewImage:(id)arg3 thumbnailImage:(id)arg4;
- (BOOL)needsMigration;
- (id)pathsToFilesTrackedByExtras:(id)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (void)photoLibraryAvailableNotification;
- (void)photoLibraryCorruptNotification;
- (void)photoLibraryRebuildingNotification;
- (id)photoWithPath:(id)arg1;
- (id)photoWithPrimaryKey:(NSInteger)arg1;
- (void)pictureWasChanged;
- (void)pictureWasDeletedNotification;
- (void)pictureWasTakenOrChanged;
- (id)posterImageForAlbum:(id)arg1;
- (void)preheatImageDataForImages:(id)arg1 withFormat:(NSInteger)arg2;
- (void)prepareToMigrateDcimToDatabase;
- (BOOL)ptpCanDeleteFiles;
- (BOOL)ptpDeletePhotoWithKey:(id)arg1 andExtension:(id)arg2;
- (BOOL)ptpDeletePhotosWithKeys:(id)arg1;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (id)ptpInformationForPhotoWithPrimaryKey:(NSInteger)arg1;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)ptpThumbnailForPhotoWithKey:(id)arg1;
- (void)removePhotosFromAllAlbums:(id)arg1;
- (BOOL)rotateCameraPhoto:(id)arg1 byDegrees:(NSInteger)arg2;
- (BOOL)rotatePLPhoto:(id)arg1 byDegrees:(NSInteger)arg2;
- (BOOL)rotatePhoto:(id)arg1 byDegrees:(NSInteger)arg2;
- (id)savedPhotosAlbum;
- (void)setPtpDelegate:(id)arg1;
- (void)setSqliteErrorAndExitIfNecessary;
- (id)syncedAlbums;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (id)userAlbums;

@end
