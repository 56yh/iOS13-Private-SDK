//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponent.h>

#import <Silex/SXQuickLookComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXFormattedText, SXJSONArray, SXJSONDictionary;
@protocol SXComponentAnchor;

@interface SXQuickLookComponent : SXComponent <SXQuickLookComponent>
{
}

+ (id)typeString;
- (id)captionWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions;
@property(readonly, nonatomic) SXJSONDictionary *analytics;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation;
@property(readonly, nonatomic) SXJSONArray *behaviors;
@property(readonly, nonatomic) SXFormattedText *caption; // @dynamic caption;
@property(readonly, nonatomic) SXComponentClassification *classification;
@property(readonly, nonatomic) SXJSONArray *conditional;
@property(readonly, nonatomic) SXComponentConditions *conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *fileExtension; // @dynamic fileExtension;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *layout;
@property(readonly, nonatomic) NSString *resourceIdentifier; // @dynamic resourceIdentifier;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) NSString *type;

@end

