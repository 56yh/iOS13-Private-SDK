//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface RTMapServiceOptions : NSObject <NSSecureCoding>
{
    _Bool _useBackgroundTraits;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool useBackgroundTraits; // @synthesize useBackgroundTraits=_useBackgroundTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUseBackgroundTraits:(_Bool)arg1;
- (id)init;

@end

