//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData, WFColor;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _glyphCharacter;
    long long _backgroundColorValue;
    NSData *_customImageData;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned short)defaultGlyphCharacter;
+ (long long)randomBackgroundColor;
@property(readonly, copy, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) unsigned short glyphCharacter; // @synthesize glyphCharacter=_glyphCharacter;
@property(readonly, nonatomic) long long backgroundColorValue; // @synthesize backgroundColorValue=_backgroundColorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) WFColor *backgroundColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3;
- (id)init;

@end

