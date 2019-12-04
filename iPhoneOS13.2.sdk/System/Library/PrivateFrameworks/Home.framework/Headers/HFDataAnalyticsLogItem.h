//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSString;
@protocol HFMediaProfileContainer;

@interface HFDataAnalyticsLogItem : HFItem <NAIdentifiable>
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSString *_name;
}

+ (id)na_identity;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isDisplayDisabled;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)fetchLog;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

