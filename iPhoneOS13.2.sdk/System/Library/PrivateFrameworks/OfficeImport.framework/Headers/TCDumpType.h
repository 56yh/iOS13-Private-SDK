//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCDumpType : NSObject
{
    NSString *mName;
}

- (void)fromXml:(struct _xmlNode *)arg1 toBinary:(struct __sFILE *)arg2 state:(id)arg3;
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (void)setName:(id)arg1;
- (id)name;
- (id)initWithName:(id)arg1;
- (id)init;

@end

