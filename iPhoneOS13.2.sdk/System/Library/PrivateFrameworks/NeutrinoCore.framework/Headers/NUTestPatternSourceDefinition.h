//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition
{
    long long _orientation;
    CDStruct_d58201db _size;
}

@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly) CDStruct_912cb5d2 size; // @synthesize size=_size;
- (long long)mediaType;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2;
- (id)init;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end

