//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol OS_xpc_object;

@interface PLXPCObject : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_object;
}

+ (BOOL)supportsSecureCoding;
+ (struct _xpc_type_s )type;
@property(readonly) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;

@end
