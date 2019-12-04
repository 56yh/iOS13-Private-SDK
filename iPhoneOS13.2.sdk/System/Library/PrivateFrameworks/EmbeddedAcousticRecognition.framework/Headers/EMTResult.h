//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSLocale, NSString;

@interface EMTResult : NSObject <NSCopying>
{
    _Bool _lowConfidence;
    float _confidence;
    NSLocale *_locale;
    NSArray *_tokens;
    NSString *_metaInfo;
}

@property(readonly, nonatomic) NSString *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(readonly, nonatomic) _Bool lowConfidence; // @synthesize lowConfidence=_lowConfidence;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(_Bool)arg4 metaInfo:(id)arg5;

@end

