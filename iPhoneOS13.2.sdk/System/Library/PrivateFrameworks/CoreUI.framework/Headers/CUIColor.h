//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface CUIColor : NSObject <NSCopying>
{
    struct CGColor *_cgColor;
}

+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
@property(readonly, nonatomic) struct CGColor *CGColor; // @synthesize CGColor=_cgColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)colorUsingCGColorSpace:(struct CGColorSpace *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCIColor:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;

@end

