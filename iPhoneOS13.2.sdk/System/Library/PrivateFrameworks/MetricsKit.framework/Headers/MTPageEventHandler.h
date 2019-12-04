//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricsKit/MTStandardEventHandler.h>

@class NSMutableArray;
@protocol MTPageEventHandlerDelegate;

@interface MTPageEventHandler : MTStandardEventHandler
{
    NSMutableArray *_trackedPageHistory;
}

@property(retain, nonatomic) NSMutableArray *trackedPageHistory; // @synthesize trackedPageHistory=_trackedPageHistory;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;
- (void)updatePageHistoryWithPage:(id)arg1;
- (id)pageHistory:(id)arg1;
- (id)eventVersion:(id)arg1;
- (id)eventType;
- (id)knownFields;

// Remaining properties
@property(nonatomic) __weak id <MTPageEventHandlerDelegate> delegate; // @dynamic delegate;

@end

