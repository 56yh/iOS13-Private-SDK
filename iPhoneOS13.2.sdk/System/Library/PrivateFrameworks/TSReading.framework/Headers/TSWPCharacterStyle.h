//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSSStyle.h>

#import <TSReading/TSSPreset-Protocol.h>

@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>
{
}

+ (id)nullStyleWithContext:(id)arg1;
+ (id)nullStyleName;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisCharacterProperties;
+ (id)emphasisProperties;
+ (id)properties;
- (_Bool)transformsFontSizes;
- (int)writingDirection;
@property(readonly, nonatomic) NSString *presetKind;

@end

