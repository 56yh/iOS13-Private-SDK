//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetViewer/ASVHitTestStrategy.h>

@interface ASVHitTestStrategyAveragedPlaneWithClusteringAndInterpolation : ASVHitTestStrategy
{
    float _currentPlaneHeight;
    // Error parsing type: , name: _currentPlaneNormal
}

-     // Error parsing type: B32@0:8^f16^24, name: hasFormedClusterForMovement:planeNormal:
-     // Error parsing type: B32@0:8^f16^24, name: hasFormedClusterForInitialPlacement:planeNormal:
- (_Bool)resultsContainPoorQualityEstimatedResults:(id)arg1;
- (id)reprojectOntoCurrentPlaneAtImagePoint:(id)arg1 inFrame:(struct CGSize)arg2 withViewportSize:(float)arg3 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (_Bool)decisionHistoryContainsPlaneChange:(id)arg1 relativeToNewDecision:(id)arg2;
- (id)interpolatedDecisionForDecision:(id)arg1;
- (id)decisionForMovementFromOriginalResult:(id)arg1 atImagePoint:(id)arg2 inFrame:(struct CGSize)arg3 withViewportSize:(float)arg4 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (id)decisionForPlacementFromOriginalResult:(id)arg1 afterPlacementTimeout:(_Bool)arg2 atImagePoint:(id)arg3 inFrame:(struct CGSize)arg4 withViewportSize:(float)arg5 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (id)decisionForHitTestOfType:(long long)arg1 atScreenPoint:(id)arg2 inFrame:(struct CGSize)arg3 withViewportSize:(float)arg4 assetPosition:maxDistance: /* Error: Ran out of types for this method. */;
- (void)clearHistory;
- (id)init;

@end

