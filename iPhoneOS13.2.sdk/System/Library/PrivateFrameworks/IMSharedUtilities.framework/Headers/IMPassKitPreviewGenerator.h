//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMImagePreviewGenerator.h>

#import <IMSharedUtilities/IMPreviewGeneratorProtocol-Protocol.h>
#import <IMSharedUtilities/IMUTITypeInformation-Protocol.h>

@interface IMPassKitPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
{
}

+ (id)passViewForPass:(id)arg1;
+ (id)passForPassData:(id)arg1 error:(id *)arg2;
+ (id)passDataForURL:(id)arg1 error:(id *)arg2;
+ (_Bool)writesToDisk;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGImage *)newCroppedAndRescaledImageFromPKPassView:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2;
+ (_Bool)hasFailed:(id)arg1 error:(id)arg2;
+ (_Bool)passViewHasFailed:(id)arg1;
+ (_Bool)passHasFailed:(id)arg1 error:(id)arg2;
+ (_Bool)passDataHasFailed:(id)arg1 error:(id)arg2;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (id)UTITypes;

@end

