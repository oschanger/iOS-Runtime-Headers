/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class SWSyncHost, NSString, SWSyncServiceConnection, <SWSyncControllerDelegate>, NSMutableArray;

@interface SWSyncController : NSObject {
    NSString *_baseDirectoryPath;
    SWSyncServiceConnection *_currentSyncConnection;
    NSString *_currentlySyncingWorkoutFilePath;
    NSMutableArray *_empedDirectoriesToSync;
    BOOL _shouldMoveFilesToSynchedDirectoryWhenDone;
    <SWSyncControllerDelegate> *_syncDelegate;
    SWSyncHost *_syncHost;
    NSString *_syncPin;
    NSInteger _uploadCount;
    NSMutableArray *_workoutFilesToSync;
}

@property <SWSyncControllerDelegate> *syncDelegate;
@property BOOL shouldMoveFilesToSynchedDirectoryWhenDone;
@property NSInteger uploadCount;

- (id)_syncHost;
- (void)_syncNextWorkout;
- (void)_syncWorkoutsForNextEmpedDirectory;
- (void)connection:(id)arg1 didConfirmEmail:(id)arg2 screenName:(id)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didGeneratePIN:(id)arg2;
- (void)connection:(id)arg1 didGenerateToken:(id)arg2;
- (void)connection:(id)arg1 didReplaceOldPINWithNewPIN:(id)arg2;
- (void)connectionDidCompleteSync:(id)arg1;
- (void)connectionDidReturnStatusInvalid:(id)arg1;
- (void)connectionDidReturnStatusUnconfirmed:(id)arg1;
- (void)connectionDidSyncWorkout:(id)arg1;
- (void)dealloc;
- (id)initWithBaseDirectoryPath:(id)arg1;
- (void)setShouldMoveFilesToSynchedDirectoryWhenDone:(BOOL)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setUploadCount:(NSInteger)arg1;
- (BOOL)shouldMoveFilesToSynchedDirectoryWhenDone;
- (void)syncAllWorkouts;
- (id)syncDelegate;
- (NSInteger)uploadCount;
- (void)visitNikeWebSite;

@end
