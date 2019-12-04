//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCTransportStream : NSObject
{
    unsigned int _transportSessionID;
    int _vtpReceiveSocket;
    int _vtpCancelSocket;
    struct tagVCMediaQueue *_mediaQueue;
    id /* block */ _callback;
    void *_callbackContext;
    int _vtpCallbackId;
    struct fd_set _readFDsForCallback;
}

@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
- (void)processVTPPacket:(struct _VTPPacket *)arg1;
- (int)unregisterPacketCallback;
- (int)registerPacketCallbackContext:(void *)arg1 callback:(id /* block */)arg2;
- (void)VCTransportStreamUnblock;
- (int)receivePacket:(CDStruct_88f6cd69 *)arg1;
- (int)VCTransportStreamSendPacket:(CDStruct_88f6cd69 *)arg1;
- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)arg1 options:(id)arg2;

@end

