//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSStunCandidate : NSObject
{
    _Bool _active;
    unsigned long long _type;
    unsigned long long _priority;
    long long _transport;
    int _index;
    struct sockaddr_storage _address;
    struct sockaddr_storage _external;
    CDStruct_330c469e _prefix;
    unsigned int _radioAccessTechnology;
    unsigned int _mtu;
    double _extIPDetectionStartTime;
    unsigned short _remoteLinkFlags;
}

+ (id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned int)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr *)arg6 external:(struct sockaddr *)arg7;
@property(nonatomic) unsigned short remoteLinkFlags; // @synthesize remoteLinkFlags=_remoteLinkFlags;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) double extIPDetectionStartTime; // @synthesize extIPDetectionStartTime=_extIPDetectionStartTime;
@property(nonatomic) unsigned int mtu; // @synthesize mtu=_mtu;
@property(readonly, nonatomic) long long transport; // @synthesize transport=_transport;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)hasNATIPv4External;
- (_Bool)hasNATIPv4Address;
- (_Bool)isLinkLocalStunCandidate;
- (_Bool)isCellularStunCandidate;
- (_Bool)isRelayStunCandidate;
- (_Bool)isServerReflexiveStunCandidate;
- (_Bool)isSameNetworkType:(id)arg1;
- (_Bool)isCompatibleWithStunCandidate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) CDStruct_330c469e *prefix;
- (void)updateTransport:(long long)arg1;
@property(nonatomic) struct sockaddr *external;
@property(readonly, nonatomic) const struct sockaddr *address;
- (id)description;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned int)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr *)arg6 external:(struct sockaddr *)arg7;

@end

