//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXFontAttributes.h>

#import <Silex/SXFontAttributes-Protocol.h>

@class NSString;

@interface SXTextSourceFontAttributes : SXFontAttributes <SXFontAttributes>
{
    NSString *_familyName;
    long long _style;
    long long _weight;
    long long _width;
}

+ (id)attributesWithFamilyName:(id)arg1 style:(long long)arg2 weight:(long long)arg3;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) long long weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

