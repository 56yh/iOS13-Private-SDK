//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



__attribute__((visibility("hidden")))
@interface _ACComponentVector : NSObject <NSSecureCoding>
{
    struct AudioComponentVector mVector;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVector:(const struct AudioComponentVector *)arg1;

@end

