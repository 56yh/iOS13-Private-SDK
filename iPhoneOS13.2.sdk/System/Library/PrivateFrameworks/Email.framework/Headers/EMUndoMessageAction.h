//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMMessageChangeAction.h>

@class NSArray;

@interface EMUndoMessageAction : EMMessageChangeAction
{
    NSArray *_individualActions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *individualActions; // @synthesize individualActions=_individualActions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)signpostType;
- (id)initWithIndividualActions:(id)arg1;

@end

