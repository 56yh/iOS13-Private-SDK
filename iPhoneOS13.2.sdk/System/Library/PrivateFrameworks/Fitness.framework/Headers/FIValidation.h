//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FIValidation : NSObject
{
    NSString *_name;
    id /* block */ _test;
}

+ (_Bool)performValidations:(id)arg1 withObject:(id)arg2 error:(id *)arg3;
+ (id)validationWithName:(id)arg1 test:(id /* block */)arg2;
@property(readonly, nonatomic) id /* block */ test; // @synthesize test=_test;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)validateObject:(id)arg1 withError:(id *)arg2;

@end

