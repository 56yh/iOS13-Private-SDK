//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameKitServices/VideoConferenceDelegate-Protocol.h>

@class GKVoiceChatDictionary, GKVoiceChatService, NSLock, NSRecursiveLock, VideoConference;
@protocol GKVoiceChatClient;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate>
{
    id <GKVoiceChatClient> client;
    _Bool outputMeteringEnabled;
    _Bool inputMeteringEnabled;
    _Bool microphoneMuted;
    unsigned int curCallID;
    int state;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    struct tagCONNRESULT currentConnResult;
    NSRecursiveLock *stateLock;
    NSLock *clientLock;
    GKVoiceChatService *wrapperService;
    _Bool forceNoICE;
    VideoConference *conf;
    int chatMode;
    _Bool focus;
}

+ (id)defaultVoiceChatService;
@property GKVoiceChatService *wrapperService; // @synthesize wrapperService;
@property int state; // @synthesize state;
@property(nonatomic) id client; // @synthesize client;
@property(readonly, nonatomic) long long outputAudioPowerSpectrumToken;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;
- (id)localDisplayNameForCallID:(unsigned int)arg1;
@property(readonly) double remoteBitrate;
@property(readonly) double remoteFramerate;
@property(readonly) double localBitrate;
@property(readonly) double localFramerate;
@property(nonatomic) void *remoteVideoLayer;
@property(nonatomic) void *localVideoLayer;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)forceNoICE:(_Bool)arg1;
@property(getter=isFocus) _Bool focus; // @synthesize focus;
@property int chatMode; // @synthesize chatMode;
@property float remoteParticipantVolume;
@property(getter=isMicrophoneMuted) _Bool microphoneMuted;
@property(readonly, nonatomic) float inputMeterLevel;
@property(readonly, nonatomic) float outputMeterLevel;
@property(getter=isInputMeteringEnabled) _Bool inputMeteringEnabled; // @synthesize inputMeteringEnabled;
@property(getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled; // @synthesize outputMeteringEnabled;
- (_Bool)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4;
- (_Bool)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2 withCallID:(unsigned int)arg3;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2;
- (id)createInvite:(id *)arg1 toParticipant:(id)arg2 callID:(unsigned int *)arg3;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)inviteIsValid:(id)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)resetState;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)denyCallID:(unsigned int)arg1;
- (_Bool)acceptCallID:(unsigned int)arg1 error:(id *)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1;
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)cleanup;
- (id)init;

@end

