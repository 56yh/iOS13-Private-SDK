//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOCompletionGroup-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup>
{
    NSString *_localizedSectionHeader;
    NSArray *_items;
    _Bool _shouldInterleaveClientResults;
    _Bool _enforceServerResultsOrder;
}

@property(readonly, nonatomic) _Bool enforceServerResultsOrder; // @synthesize enforceServerResultsOrder=_enforceServerResultsOrder;
@property(readonly, nonatomic) _Bool shouldInterleaveClientResults; // @synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults;
@property(readonly, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

