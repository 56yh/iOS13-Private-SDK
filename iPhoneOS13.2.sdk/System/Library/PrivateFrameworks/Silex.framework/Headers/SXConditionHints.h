//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXConditionHints-Protocol.h>

@class NSString;

@interface SXConditionHints : SXJSONObject <SXConditionHints>
{
}

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
- (_Bool)BOOLValueForJSONValue:(id)arg1 type:(int)arg2;
- (_Bool)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)testingWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)subscriptionStatusWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)viewLocationWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)platformWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxColumnsWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minColumnsWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)minViewportWidthWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) _Bool horizontalSizeClass; // @dynamic horizontalSizeClass;
@property(readonly, nonatomic) _Bool maxColumns; // @dynamic maxColumns;
@property(readonly, nonatomic) _Bool maxContentSizeCategory; // @dynamic maxContentSizeCategory;
@property(readonly, nonatomic) _Bool maxSpecVersion; // @dynamic maxSpecVersion;
@property(readonly, nonatomic) _Bool maxViewportAspectRatio; // @dynamic maxViewportAspectRatio;
@property(readonly, nonatomic) _Bool maxViewportWidth; // @dynamic maxViewportWidth;
@property(readonly, nonatomic) _Bool minColumns; // @dynamic minColumns;
@property(readonly, nonatomic) _Bool minContentSizeCategory; // @dynamic minContentSizeCategory;
@property(readonly, nonatomic) _Bool minSpecVersion; // @dynamic minSpecVersion;
@property(readonly, nonatomic) _Bool minViewportAspectRatio; // @dynamic minViewportAspectRatio;
@property(readonly, nonatomic) _Bool minViewportWidth; // @dynamic minViewportWidth;
@property(readonly, nonatomic) _Bool platform; // @dynamic platform;
@property(readonly, nonatomic) _Bool preferredColorScheme; // @dynamic preferredColorScheme;
@property(readonly, nonatomic) _Bool subscriptionStatus; // @dynamic subscriptionStatus;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool testing; // @dynamic testing;
@property(readonly, nonatomic) _Bool verticalSizeClass; // @dynamic verticalSizeClass;
@property(readonly, nonatomic) _Bool viewLocation; // @dynamic viewLocation;

@end

