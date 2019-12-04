//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSDictionary, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocator : VCObject
{
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    _Bool _videoEnabled;
    _Bool _redundancyEnabled;
}

- (void)_assignCurrentTables;
- (id)audioRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)videoStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)videoMediaBitratesForTargetNetworkBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)audioRepairStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)audioStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)_videoEntriesForTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2 remainingBitrate:(unsigned int *)arg3;
- (_Bool)_isAvailableStreamConfiguration:(id)arg1;
- (_Bool)enableVideoStream:(_Bool)arg1 streamID:(unsigned short)arg2;
- (id)_audioEntriesForTargetBitrate:(unsigned int)arg1;
@property(nonatomic, getter=isRedundancyEnabled) _Bool redundancyEnabled;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

