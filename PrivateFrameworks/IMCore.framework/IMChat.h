/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary, IMMessage, NSString, NSDate, NSMutableArray, IMAccount;

@interface IMChat : NSObject <IMSecureObject> {
    IMAccount *_account;
    NSUInteger _chatItemChangeCount;
    NSMutableArray *_chatItems;
    NSMutableDictionary *_chatProperties;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    BOOL _didSendAFinishedMessage;
    NSInteger _directConnectionStatus;
    BOOL _disabledEncryption;
    NSString *_guid;
    IMMessage *_invitationForPendingParticipants;
    BOOL _isFirstMessageInvitation;
    NSInteger _joinState;
    double _joinedTimeInterval;
    NSMutableArray *_messagesPendingJoin;
    NSUInteger _overallChatStatus;
    NSMutableDictionary *_participantProperties;
    NSMutableDictionary *_participantStates;
    NSMutableArray *_participants;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSInteger _securityLevel;
    BOOL _shouldAnnouncePeopleJoin;
    unsigned char _style;
    BOOL _suppressEncryptionChatItems;
    NSMutableDictionary *_unfinishedChatItemMap;
    BOOL _wasInvitationHandled;
}

@property BOOL suppressEncryptionChatItems; /* unknown property attribute: SsetSupressEncryptionChatItems: */
@property(readonly) IMAccount *account;
@property(readonly) NSString *chatIdentifier;
@property(readonly) NSArray *chatItems;
@property(readonly) NSDate *dateCreated;
@property(readonly) NSDate *dateModified;
@property(readonly) NSString *guid;
@property(retain) IMMessage *invitationForPendingParticipants;
@property(readonly) NSArray *participants;
@property(retain) IMHandle *recipient;
@property(readonly) NSString *roomName;
@property(readonly) NSString *roomNameWithoutSuffix;
@property(readonly) BOOL canBeSecure;
@property(readonly) BOOL canHaveMultipleParticipants;
@property(readonly) unsigned char chatStyle;
@property(readonly) NSInteger directConnectionStatus;
@property(readonly) BOOL hasUnhandledInvitation;
@property(readonly) NSInteger joinState;
@property(readonly) NSUInteger overallChatStatus;
@property NSInteger securityLevel;

- (void)_accountLoggedOut:(id)arg1;
- (void)_addParticipant:(id)arg1;
- (void)_appendChatItem:(id)arg1;
- (void)_beginChatItemChanges;
- (void)_buildChatItemForDecidingHandleWentOffline:(id)arg1;
- (void)_buildChatItemForDirectConnectionStatus:(NSInteger)arg1;
- (void)_buildChatItemForDisconnectOrLogout;
- (void)_buildChatItemForErrorMessage:(id)arg1;
- (void)_buildChatItemForNewRecipient:(id)arg1 isNewAccount:(BOOL)arg2;
- (void)_buildChatItemForOverallChatStatusFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (void)_buildChatItemForParticipantState:(NSInteger)arg1 handle:(id)arg2;
- (void)_buildChatItemForSecurityLevelChangeFrom:(NSInteger)arg1 to:(NSInteger)arg2;
- (void)_buildInitialChatItems:(id)arg1;
- (id)_dateStampForChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_endChatItemChanges;
- (void)_fixLastStatusMessageIfNecessary;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_handleIncomingMessage:(id)arg1;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 directConnectionStatus:(NSInteger)arg4 roomName:(id)arg5 chatItems:(id)arg6 participants:(id)arg7;
- (void)_insertArchivedChatItems:(id)arg1;
- (NSUInteger)_insertChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)_isDuplicate:(id)arg1;
- (id)_newHeaderChatItemWithDate:(id)arg1;
- (id)_newInitialTypingIndicatorChatItem;
- (void)_participant:(id)arg1 statusChanged:(NSInteger)arg2;
- (void)_postChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_removeChatItem:(id)arg1 andTimestamp:(BOOL)arg2;
- (void)_removeInitialTypingIndicator;
- (void)_replaceChatItem:(id)arg1 withChatItem:(id)arg2;
- (void)_setDirectConnectionStatus:(NSInteger)arg1;
- (void)_setJoinState:(NSInteger)arg1;
- (void)_setParticipantState:(NSInteger)arg1 forHandle:(id)arg2;
- (BOOL)_shouldAnnouncePeopleJoin;
- (BOOL)_shouldDisplayInitialTypingIndicator;
- (void)_showErrorMessage:(id)arg1;
- (id)_timeStampForChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_updateHeaderChatItem;
- (void)_updateSecurityLevelForMessage:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)acceptInvitation;
- (id)account;
- (void)addPendingParticipants:(id)arg1;
- (id)allChatProperties;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)attemptDirectConnection;
- (BOOL)canBeSecure;
- (BOOL)canHaveMultipleParticipants;
- (id)chatIdentifier;
- (id)chatItems;
- (unsigned char)chatStyle;
- (void)clear;
- (id)convertToChatStyle:(unsigned char)arg1;
- (id)dateCreated;
- (id)dateModified;
- (void)dealloc;
- (void)declineInvitation;
- (NSInteger)directConnectionStatus;
- (id)guid;
- (BOOL)hasUnhandledInvitation;
- (id)init;
- (id)invitationForPendingParticipants;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)join;
- (NSInteger)joinState;
- (void)leave;
- (void)mark;
- (NSUInteger)overallChatStatus;
- (id)participants;
- (id)participantsWithState:(NSUInteger)arg1;
- (void)processChatItem:(id)arg1;
- (id)recipient;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (id)roomName;
- (id)roomNameWithoutSuffix;
- (NSInteger)securityLevel;
- (void)sendMessage:(id)arg1;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setSecurityLevel:(NSInteger)arg1;
- (void)setSupressEncryptionChatItems:(BOOL)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (BOOL)shouldAppendDatestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldAppendTimestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldInsertChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)stateForParticipant:(id)arg1;
- (BOOL)suppressEncryptionChatItems;
- (id)valueForChatProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;

@end
