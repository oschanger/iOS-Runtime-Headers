/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSMachPort, NSTimer, NSString, NSLock;

@interface PCPersistentInterfaceManager : NSObject {
    NSInteger _WWANContextIdentifier;
    struct __CFSet { } *_WWANInterfaceAssertionDelegates;
    NSTimer *_WWANInterfaceAssertionDisableTimer;
    NSString *_WWANInterfaceName;
    struct __CFSet { } *_WiFiAutoAssociationDelegates;
    NSTimer *_WiFiAutoAssociationDisableTimer;
    BOOL _belowRSSIThreshold;
    void *_ctServerConnection;
    struct __CFDictionary { } *_delegatesAndRunLoops;
    void *_interfaceAssertion;
    BOOL _isInCall;
    BOOL _isInternetReachable;
    BOOL _isInternetReachableViaWiFi;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInHomeCountry;
    BOOL _isWWANInterfaceActivationPermitted;
    BOOL _isWWANInterfaceDataActive;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceUp;
    BOOL _isWakeOnWiFiEnabled;
    BOOL _isWakeOnWiFiSupported;
    double _lastActivationTime;
    NSLock *_lock;
    NSMachPort *_machPort;
    void *_reachability;
    struct __CFSet { } *_wakeOnWiFiDelegates;
    NSTimer *_wakeOnWiFiDisableTimer;
    void *_wifiManager;
    NSInteger _wwanRSSI;
}

@property(readonly) NSString *WWANInterfaceName;
@property(readonly) BOOL areAllNetworkInterfacesDisabled;
@property(readonly) BOOL doesWWANInterfaceExist;
@property(readonly) BOOL isInCall;
@property(readonly) BOOL isInternetReachable;
@property(readonly) BOOL isInternetReachableViaWiFi;
@property(readonly) BOOL isPowerStateDetectionSupported;
@property(readonly) BOOL isWWANInHomeCountry;
@property(readonly) BOOL isWWANInterfaceActivationPermitted;
@property(readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property(readonly) BOOL isWWANInterfaceUp;
@property(readonly) BOOL isWakeOnWiFiSupported;

+ (id)sharedInstance;

- (id)WWANInterfaceName;
- (id)WiFiInterfaceName;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWakeOnWiFiLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (BOOL)_allowBindingToWWAN;
- (void)_createCTConnection;
- (void)_createReachabilityMonitor;
- (void)_createWiFiManager;
- (void)_ctConnectionWasInvalidated;
- (void)_mainThreadDelayedInvalidation;
- (void)_performCalloutsForSelectorValue:(id)arg1;
- (void)_populateWakeOnWiFiCapabliity;
- (void)_populateWakeOnWiFiCapabliityLocked;
- (void)_reachabilityCallback:(NSUInteger)arg1;
- (void)_reachabilityCallbackLocked:(NSUInteger)arg1;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_serverCallback:(id)arg1 info:(id)arg2;
- (void)_serverCallbackLocked:(id)arg1 info:(id)arg2;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpStateLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (BOOL)_wwanRSSIBelowThresholdAndWoWAvailableLocked;
- (void)addDelegate:(id)arg1 callbackRunLoop:(id)arg2;
- (BOOL)areAllNetworkInterfacesDisabled;
- (void)bindCFStream:(struct __CFReadStream { }*)arg1 toWWANInterface:(BOOL)arg2;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream { }*)arg1;
- (void)bindSocket:(NSInteger)arg1 toWWANInterface:(BOOL)arg2;
- (void)bindSocketToWWANInterface:(NSInteger)arg1;
- (id)dhcpLeaseExpirationDate;
- (BOOL)doesWWANInterfaceExist;
- (void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2;
- (void)handleMachMessage:(void*)arg1;
- (id)init;
- (BOOL)isInCall;
- (BOOL)isInternetReachable;
- (BOOL)isInternetReachableViaWiFi;
- (BOOL)isPowerStateDetectionSupported;
- (BOOL)isWWANInHomeCountry;
- (BOOL)isWWANInterfaceActivationPermitted;
- (BOOL)isWWANInterfaceInProlongedHighPowerState;
- (BOOL)isWWANInterfaceUp;
- (BOOL)isWakeOnWiFiSupported;
- (void)keepWWANInterfaceUp:(BOOL)arg1 forDelegate:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;

@end
