//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEORequestCounterTicket-Protocol.h>

@class GEORequestCounterPersistence, NSString;
@protocol OS_nw_activity;

__attribute__((visibility("hidden")))
@interface _GEOLocalRequestCounterTicket : NSObject <GEORequestCounterTicket>
{
    unsigned char _type;
    NSString *_appId;
    NSString *_requestId;
    GEORequestCounterPersistence *_persistence;
    NSObject<OS_nw_activity> *_nwActivity;
    _Bool _complete;
}

+ (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 persistence:(id)arg3;
+ (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3;
- (void)startingRequestWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

