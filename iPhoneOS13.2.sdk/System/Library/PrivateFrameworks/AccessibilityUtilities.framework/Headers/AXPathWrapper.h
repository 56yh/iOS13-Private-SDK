//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface AXPathWrapper : NSObject <NSSecureCoding>
{
    struct CGPath *_path;
}

+ (id)currentSharedInstance;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

