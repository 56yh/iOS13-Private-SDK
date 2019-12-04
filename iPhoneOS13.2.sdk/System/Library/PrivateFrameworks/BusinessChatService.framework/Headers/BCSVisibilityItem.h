//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface BCSVisibilityItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_language;
    NSString *_country;
    double _ratio;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (_Bool)isVisibleForDSID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithLanguage:(id)arg1 country:(id)arg2 ratio:(double)arg3;
- (id)initWithVisibility:(id)arg1;

@end

