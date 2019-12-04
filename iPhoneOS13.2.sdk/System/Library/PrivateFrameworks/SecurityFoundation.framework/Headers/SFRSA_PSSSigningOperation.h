//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/SFRSASigningOperation.h>

@protocol SFMaskGenerationFunction;

@interface SFRSA_PSSSigningOperation : SFRSASigningOperation
{
    id _pssSigningOperationInternal;
}

@property(copy, nonatomic) id <SFMaskGenerationFunction> maskGenerationFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;

@end

