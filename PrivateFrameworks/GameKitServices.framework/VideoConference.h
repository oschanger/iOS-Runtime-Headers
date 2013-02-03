/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<VideoConferenceRealTimeChannel>, VCCallSession, NSLock, GKNATObserver, NSObject<VideoConferenceSpeakingDelegate>, VideoConferenceManager, NSObject<VideoConferenceDelegate>, NSArray, NSObject<VideoConferenceNotificationObserver>, NSString, NSMutableDictionary, NSObject<VideoConferenceChannelQualityDelegate>, CALayer;

@interface VideoConference : NSObject <VCCallSessionDelegate, GKNATObserverDelegate> {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct tagCameraStatus { 
        unsigned char fValid; 
        unsigned char orientation; 
        unsigned char isBeingSwitched; 
        unsigned char facing; 
    struct tagCameraStatus { 
        unsigned char fValid; 
        unsigned char orientation; 
        unsigned char isBeingSwitched; 
        unsigned char facing; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
     /* Encoded args for previous method: B44@0:4*8i12i16I20i24d28f36L40 */
     /* Encoded args for previous method: B28@0:4*8i12i16I20f24 */
     /* Encoded args for previous method: B20@0:4c8i12i16 */
     /* Encoded args for previous method: B36@0:4^@8^{tagHANDLE=i}12^{tagHANDLE=i}16i20c24c28*32 */
     /* Encoded args for previous method: B16@0:4c8^@12 */
     /* Encoded args for previous method: B48@0:4^{__CVBuffer=}8{?=qiIq}12B36B40I44 */
     /* Encoded args for previous method: B40@0:4^{__CVBuffer=}8{?=qiIq}12^{tagCameraStatus=CCCC}36 */
    NSInteger chatMode;
    float conferenceVolume;
    NSArray *connectedPeers;
    NSString *currentFocus;
    VCCallSession *currentFocusSession;
    double dAudioHostTime;
    NSObject<VideoConferenceDelegate> *delegate;
    NSLock *delegateLock;
    BOOL disableVAD;
    NSInteger downstreamBandwidth;
    NSUInteger dwAudioTS;
    struct __CFString { } *forceHWI;
    BOOL forceHWICheck;
    struct __CFString { } *forceNOLOG;
    BOOL forceNoICE;
    NSObject<VideoConferenceNotificationObserver> *genericObserver;
    struct tagHANDLE { NSInteger x1; } *hCMCapture;
    struct tagHANDLE { NSInteger x1; } *hVR;
    struct tagHANDLE { NSInteger x1; } *hVT;
    BOOL hasMic;
    NSInteger iSoundBytes;
    float inputMeterLevel;
    BOOL inputMeteringEnabled;
    BOOL isAttemptingRelay;
    BOOL isFocus;
    BOOL isGKVoiceChat;
    BOOL isRecvVideo;
    BOOL isTalking;
    BOOL isUsingSuppression;
    NSUInteger lastSentAudioSampleTime;
    struct _CAImageQueue { } *localCAImageQueue;
    struct _CAImageQueue { } *localCAImageQueueBack;
    } localCameraStatus;
    void *localVideoBackLayer;
    struct OpaqueFigImageQueue { } *localVideoImageQueue;
    struct OpaqueFigImageQueue { } *localVideoImageQueueBack;
    void *localVideoLayer;
    NSInteger localVideoSlot;
    NSInteger localVideoSlotBack;
    CALayer *localVideoSubLayer;
    CALayer *localVideoSubLayerBack;
    float longTerm;
    VideoConferenceManager *manager;
    BOOL microphoneMuted;
    NSArray *mutedPeers;
    } natCond;
    } natMutex;
    GKNATObserver *natObserver;
    NSInteger natType;
    float outputMeterLevel;
    BOOL outputMeteringEnabled;
    NSInteger packetsPerBundle;
    NSUInteger preferredCodec;
    struct __CVPixelBufferPool { } *previewBufferPool;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    BOOL receivedFirstPreviewFrame;
    BOOL receivedFirstRemoteFrame;
    NSInteger recvRTPBytes;
    double recvRTPTimeStamp;
    struct _CAImageQueue { } *remoteCAImageQueue;
    struct _CAImageQueue { } *remoteCAImageQueueBack;
    } remoteCameraStatus;
    void *remoteVideoBackLayer;
    struct OpaqueFigImageQueue { } *remoteVideoImageQueue;
    struct OpaqueFigImageQueue { } *remoteVideoImageQueueBack;
    void *remoteVideoLayer;
    NSInteger remoteVideoSlot;
    NSInteger remoteVideoSlotBack;
    CALayer *remoteVideoSubLayer;
    CALayer *remoteVideoSubLayerBack;
    unsigned char requestedCameraType;
    BOOL requiresWifi;
    NSObject<VideoConferenceRealTimeChannel> *rtChannel;
    NSArray *sessionArray;
    NSMutableDictionary *sessionDict;
    float shortTerm;
    BOOL shouldSendEmptyPacket;
    BOOL shouldTimeoutPackets;
    unsigned char speakingArray[16];
    NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
    } stateLock;
    NSUInteger talkTime;
    NSUInteger talkingPeersLimit;
    NSInteger upstreamBandwidth;
    BOOL useAFRC;
    BOOL useComplexRendering;
    BOOL useCompressedConnectionData;
    BOOL useViceroyBlobFormat;
    struct OpaqueVTPixelTransferSession { } *vtTransferSession;
    } xAudioTS;
    } xLocalLayer;
    } xRemoteLayer;
}

@property NSObject<VideoConferenceRealTimeChannel> *rtChannel; /* unknown property attribute: SsetRTChannel: */
@property(retain) NSString *currentFocus;
@property NSObject<VideoConferenceDelegate> *delegate;
@property NSObject<VideoConferenceNotificationObserver> *genericObserver;
@property void *localVideoBackLayer;
@property void *localVideoLayer;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
@property void *remoteVideoBackLayer;
@property void *remoteVideoLayer;
@property NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
@property NSUInteger cameraType;
@property NSInteger chatMode;
@property float conferenceVolume;
@property BOOL disableVAD;
@property NSInteger downstreamBandwidth;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property BOOL hasMic;
@property(readonly) float inputMeterLevel;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property BOOL isFocus;
@property BOOL isGKVoiceChat;
@property BOOL isUsingSuppression;
@property(getter=getLocalBitrate,readonly) double localBitrate;
@property(getter=getLocalFramerate,readonly) double localFramerate;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property NSInteger natType;
@property NSUInteger orientation;
@property(readonly) float outputMeterLevel;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property NSInteger packetsPerBundle;
@property NSUInteger preferredCodec;
@property(getter=getRemoteBitrate,readonly) double remoteBitrate;
@property(getter=getRemoteFramerate,readonly) double remoteFramerate;
@property BOOL requiresWifi;
@property BOOL setupAudioSession;
@property BOOL shouldTimeoutPackets;
@property NSUInteger talkingPeersLimit;
@property NSInteger upstreamBandwidth;
@property BOOL useComplexRendering;
@property BOOL useCompressedConnectionData;
@property BOOL useViceroyBlobFormat;

- (void)NATTypeDidChange:(NSInteger)arg1;
- (void)calculateMixingArrays:(NSUInteger*)arg1 talkingMask:(NSUInteger)arg2;
- (NSUInteger)calculateTalkingMaskAtTimeStamp:(NSUInteger)arg1 samples:(short*)arg2 numSamples:(NSInteger)arg3;
- (NSInteger)callIDForOpenSessionWithParticipantID:(id)arg1;
- (NSInteger)callIDForParticipantID:(id)arg1;
- (NSUInteger)cameraType;
- (NSInteger)captureAsFocus:(char *)arg1 numBytes:(NSInteger)arg2 numSamples:(NSInteger)arg3 timeStamp:(NSUInteger)arg4 timeStampDelta:(NSInteger)arg5 averagePower:(unsigned char)arg6;
- (NSInteger)captureAsFocusClient:(char *)arg1 numBytes:(NSInteger)arg2 numSamples:(NSInteger)arg3 timeStamp:(NSUInteger)arg4 timeStampDelta:(NSInteger)arg5 averagePower:(unsigned char)arg6;
- (NSInteger)captureMeshMode:(char *)arg1 numBytes:(NSInteger)arg2 numSamples:(NSInteger)arg3 timeStamp:(NSUInteger)arg4 timeStampDelta:(NSInteger)arg5 hostTime:(double)arg6;
- (NSInteger)chatMode;
- (void)cleanupManager;
- (void)cleanupProc:(id)arg1;
- (void)cleanupQueues;
- (void)cleanupSession:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (void)cleanupSession:(id)arg1 withDelay:(NSUInteger)arg2;
- (float)conferenceVolume;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(NSInteger*)arg2 error:(id*)arg3;
- (NSUInteger)connectionResultCallbackForCallID:(NSInteger)arg1 result:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { NSInteger x_12_1_1; BOOL x_12_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; NSUInteger x13; }*)arg2 didReceiveICEPacket:(BOOL)arg3 didUseRelay:(BOOL)arg4;
- (id)currentFocus;
- (void)dealloc;
- (void)defaultCleanupSession:(id)arg1;
- (id)delegate;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)didDetectBandwidth:(BOOL)arg1 upstreamBandwidth:(NSInteger)arg2 downstreamBandwidth:(NSInteger)arg3;
- (BOOL)disableVAD;
- (NSInteger)downstreamBandwidth;
- (void)forceNoICE:(BOOL)arg1;
- (id)genericObserver;
- (BOOL)getIsAudioPaused:(BOOL*)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (BOOL)getIsVideoPaused:(BOOL*)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (double)getLocalBitrate;
- (double)getLocalFramerate;
- (void)getNSError:(id*)arg1 code:(NSInteger)arg2 description:(id)arg3 hResult:(NSInteger)arg4;
- (void)getNSError:(id*)arg1 code:(NSInteger)arg2 description:(id)arg3 reason:(id)arg4;
- (double)getRemoteBitrate;
- (double)getRemoteFramerate;
- (void)getVideoSettings:(NSInteger*)arg1 height:(NSInteger*)arg2 frameRate:(NSInteger*)arg3 bitRate:(NSInteger*)arg4 localIfName:(char *)arg5 useBFC:(BOOL*)arg6 enableBitstreamCapture:(BOOL*)arg7 enable2vuyCapture:(BOOL*)arg8 enableVPBLogging:(BOOL*)arg9;
- (BOOL)hasMic;
- (BOOL)hasSessionWaitingForSIPInvite;
- (id)init;
- (float)inputMeterLevel;
- (BOOL)isFocus;
- (BOOL)isGKVoiceChat;
- (BOOL)isInputMeteringEnabled;
- (BOOL)isMicrophoneMuted;
- (BOOL)isOutputMeteringEnabled;
- (BOOL)isSpeakerPhoneEnabled;
- (BOOL)isUsingSuppression;
- (id)localDisplayNameForCallID:(NSInteger)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (NSInteger)localVideoSlot:(BOOL)arg1;
- (id)loopbackSessionWaitingForSIPInvite;
- (BOOL)matchesCallID:(NSInteger)arg1;
- (BOOL)matchesIncomingConnectionResult:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { NSInteger x_12_1_1; BOOL x_12_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; NSUInteger x13; }*)arg1;
- (BOOL)matchesOpenSessionForParticipantID:(id)arg1;
- (BOOL)matchesParticipantID:(id)arg1;
- (NSInteger)natType;
- (double)networkQualityForCallID:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)onCaptureSound:(char *)arg1 numBytes:(NSInteger)arg2 numSamples:(NSInteger)arg3 timeStamp:(NSUInteger)arg4 timeStampDelta:(NSInteger)arg5 hostTime:(double)arg6 averagePower:(float)arg7 voiceActivity:(unsigned long)arg8;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)onCaptureVideo:(struct __CVBuffer { }*)arg1 frameTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2 preview:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg3 isSwitching:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg4 cameraType:(NSUInteger)arg5;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)onPlaySound:(char *)arg1 numBytes:(NSInteger)arg2 numSamples:(NSInteger)arg3 timeStamp:(NSUInteger)arg4 averagePower:(float)arg5;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)onPlayVideo:(struct __CVBuffer { }*)arg1 frameTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2 cameraStatus:(struct tagCameraStatus { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg3;
- (id)openSessionForParticipant:(id)arg1;
- (NSUInteger)orientation;
- (float)outputMeterLevel;
- (void)packMeters:(char *)arg1 forSession:(id)arg2 len:(char *)arg3;
- (double)packetLossRateForCallID:(NSInteger)arg1;
- (NSInteger)packetsPerBundle;
- (id)participantIDForCallID:(NSInteger)arg1;
- (unsigned char)powerFloatToInt:(float)arg1;
- (float)powerIntToFloat:(unsigned char)arg1;
- (NSUInteger)preferredCodec;
- (void)processRelayRequestResponse:(NSInteger)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayUpdate:(NSInteger)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (NSUInteger)pruneQuietestPeers:(NSUInteger)arg1 talking:(NSUInteger)arg2 mask:(NSUInteger)arg3 meters:(char *)arg4;
- (NSInteger)pullDecodedAsFocus:(short*)arg1 timestamp:(NSUInteger)arg2 numBytes:(NSInteger)arg3 numSamples:(NSInteger)arg4;
- (NSInteger)pullDecodedAsFocusClient:(short*)arg1 timestamp:(NSUInteger)arg2 numBytes:(NSInteger)arg3 numSamples:(NSInteger)arg4;
- (NSInteger)pullDecodedMeshMode:(short*)arg1 timestamp:(NSUInteger)arg2 numBytes:(NSInteger)arg3 numSamples:(NSInteger)arg4;
- (id)qualityDelegate;
- (void)rdlock;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)recvSamplesForSession:(id)arg1 samples:(short*)arg2 numSamples:(NSInteger)arg3 storeTimestamp:(NSUInteger)arg4;
- (void)remoteAudioDidPause:(BOOL)arg1 callID:(NSInteger)arg2;
- (void)remoteCancelledCallID:(NSInteger)arg1;
- (id)remoteDisplayNameForCallID:(NSInteger)arg1;
- (void*)remoteVideoBackLayer;
- (void)remoteVideoDidPause:(BOOL)arg1 callID:(NSInteger)arg2;
- (void*)remoteVideoLayer;
- (NSInteger)remoteVideoSlot:(BOOL)arg1;
- (BOOL)requiresWifi;
- (id)rtChannel;
- (NSInteger)sendBundle:(id)arg1 samples:(char *)arg2 numEncodedBytes:(NSInteger)arg3 timeStamp:(NSUInteger)arg4 timeStampDelta:(NSInteger)arg5 hasNewSamples:(BOOL)arg6;
- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)session:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (void)session:(id)arg1 didStopWithDelay:(NSInteger)arg2 error:(id)arg3;
- (void)session:(id)arg1 didStopWithError:(id)arg2;
- (void)session:(id)arg1 inititiateRelayRequest:(id)arg2;
- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(id)arg1 sendRelayResponse:(id)arg2;
- (id)sessionForIncomingConnectionResult:(struct tagCONNRESULT { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; unsigned short x5; unsigned short x6; struct tagIPPORT { NSInteger x_7_1_1; BOOL x_7_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_7_1_3; unsigned short x_7_1_4; } x7; struct tagIPPORT { NSInteger x_8_1_1; BOOL x_8_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_8_1_3; unsigned short x_8_1_4; } x8; struct tagIPPORT { NSInteger x_9_1_1; BOOL x_9_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { NSInteger x_10_1_1; BOOL x_10_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { NSInteger x_11_1_1; BOOL x_11_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { NSInteger x_12_1_1; BOOL x_12_1_2[16]; union { NSUInteger x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; NSUInteger x13; }*)arg1;
- (id)sessionForIncomingParticipantID:(id)arg1;
- (id)sessionForParticipantID:(id)arg1;
- (BOOL)setActive:(BOOL)arg1;
- (void)setCameraType:(NSUInteger)arg1;
- (void)setChatMode:(NSInteger)arg1;
- (void)setConferenceVolume:(float)arg1;
- (void)setCurrentFocus:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableVAD:(BOOL)arg1;
- (void)setDownstreamBandwidth:(NSInteger)arg1;
- (void)setEnableSpeakerPhone:(BOOL)arg1;
- (void)setGenericObserver:(id)arg1;
- (void)setHasMic:(BOOL)arg1;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (void)setIsFocus:(BOOL)arg1;
- (void)setIsGKVoiceChat:(BOOL)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (void)setNatType:(NSInteger)arg1;
- (void)setOrientation:(NSUInteger)arg1;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (void)setPacketsPerBundle:(NSInteger)arg1;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (BOOL)setPauseAudio:(BOOL)arg1;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(NSInteger)arg2 error:(id*)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1;
- (void)setPeerCN:(id)arg1 callID:(NSInteger)arg2;
- (void)setPreferredCodec:(NSUInteger)arg1;
- (void)setQualityDelegate:(id)arg1;
- (void)setRTChannel:(id)arg1;
- (void)setRemoteVideoBackLayer:(void*)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setRequiresWifi:(BOOL)arg1;
- (void)setSendAudio:(BOOL)arg1 forCallID:(NSInteger)arg2;
- (void)setSetupAudioSession:(BOOL)arg1;
- (void)setShouldTimeoutPackets:(BOOL)arg1;
- (void)setSpeakingDelegate:(id)arg1;
- (void)setTalkingPeersLimit:(NSUInteger)arg1;
- (void)setUpstreamBandwidth:(NSInteger)arg1;
- (void)setUseComplexRendering:(BOOL)arg1;
- (void)setUseCompressedConnectionData:(BOOL)arg1;
- (void)setUseViceroyBlobFormat:(BOOL)arg1;
- (BOOL)setupAudioSession;
- (BOOL)shouldSendAudioForCallID:(NSInteger)arg1;
- (BOOL)shouldTimeoutPackets;
- (NSInteger)sipCallbackNotification:(NSInteger)arg1 callID:(NSInteger)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void*)arg5 confIndex:(NSInteger*)arg6;
- (id)speakingDelegate;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(NSInteger)arg2 usingBlob:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 error:(id*)arg6;
- (BOOL)startPreviewWithError:(id*)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)startVideoIO:(id*)arg1 rtpVideo:(struct tagHANDLE { NSInteger x1; }*)arg2 rtpAudio:(struct tagHANDLE { NSInteger x1; }*)arg3 actualVideoPayload:(NSInteger)arg4 enableUEP:(BOOL)arg5 enableControlByte:(BOOL)arg6 featuresListString:(char *)arg7;
- (void)startVideoProc:(id)arg1;
- (NSInteger)stateForCallID:(NSInteger)arg1;
- (void)stopCallID:(NSInteger)arg1 didRemoteCancel:(BOOL)arg2;
- (void)stopCallID:(NSInteger)arg1;
- (void)stopPreview;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)stopVideoIO:(BOOL)arg1 error:(id*)arg2;
- (NSUInteger)talkingPeersLimit;
- (void)threadSafeCleanupSession:(id)arg1;
- (NSInteger)tryrdlock;
- (void)unlock;
- (void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)updateMeters:(unsigned short)arg1;
- (BOOL)updateSpeaking:(unsigned long)arg1 timeStamp:(NSUInteger)arg2;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
- (NSInteger)upstreamBandwidth;
- (BOOL)useComplexRendering;
- (BOOL)useCompressedConnectionData;
- (BOOL)useViceroyBlobFormat;
- (void)warmupForCall;
- (void)wrlock;

@end
