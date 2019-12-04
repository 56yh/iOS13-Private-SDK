//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedElement-Protocol.h>

@class NSArray, NSString;

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement>
{
    NSString *_identifier;
    NSString *_firstGroupID;
    NSString *_lastGroupID;
    NSArray *_hiddenElements;
}

@property(readonly, copy, nonatomic) NSArray *hiddenElements; // @synthesize hiddenElements=_hiddenElements;
@property(readonly, copy, nonatomic) NSString *lastGroupID; // @synthesize lastGroupID=_lastGroupID;
@property(readonly, copy, nonatomic) NSString *firstGroupID; // @synthesize firstGroupID=_firstGroupID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (id)copyWithHiddenElements:(id)arg1;
- (id)copyWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isGap;
@property(readonly, nonatomic) long long feedElementType;
- (id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 hiddenElements:(id)arg3;
- (id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 hiddenElements:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

