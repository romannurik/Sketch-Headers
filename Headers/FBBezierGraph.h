//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface FBBezierGraph : NSObject
{
    NSMutableArray *_contours;
    struct CGRect _bounds;
    struct CGPath *_CGPath;
}

+ (id)bezierGraph;
+ (id)bezierGraphWithBezierPath:(id)arg1;
+ (id)bezierGraphWithCGPath:(struct CGPath *)arg1;
@property(nonatomic) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;
@property(readonly, nonatomic) NSArray *contours; // @synthesize contours=_contours;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)contoursContainingOtherContours:(id)arg1;
- (id)bezierGraphByTrimmingSelfCrossingContours;
- (id)bezierGraphByMergingLinearRunsInContours;
- (id)contoursWithoutCrossings;
- (BOOL)contourHasCrossings:(id)arg1;
- (id)contourFromCurves:(id)arg1;
- (id)nextCrossingFromCrossing:(id)arg1 curves:(id *)arg2;
- (id)curveFromCrossing:(id)arg1 to:(id)arg2;
- (id)bezierGraphWithTransform:(struct CGAffineTransform)arg1;
- (id)description;
- (void)debugFindCurvesThatShouldIntersectWith:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)debuggingInsertIntersectionsWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForFillConversion;
- (void)debuggingInsertCrossingsWithBezierGraph:(id)arg1 markInside:(BOOL)arg2 markOtherInside:(BOOL)arg3;
- (void)debuggingInsertCrossingsForDifferenceWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForIntersectWithBezierGraph:(id)arg1;
- (void)debuggingInsertCrossingsForUnionWithBezierGraph:(id)arg1;
- (id)nonselfIntersectingContours;
- (id)nonintersectingContours;
- (void)addContour:(id)arg1;
- (void)removeOverlaps;
- (void)removeCrossings;
- (id)bezierGraphFromNonselfIntersections:(BOOL)arg1;
- (id)firstUnprocessedCrossing:(BOOL)arg1;
- (void)markAllCrossingsAsUnprocessed;
- (void)removeCrossings:(id)arg1 forContours:(id)arg2;
- (void)removeContoursThatDontContain:(id)arg1;
- (void)removeContourCrossings:(id)arg1 thatDontAppearIn:(id)arg2;
- (id)contoursFromCrossings:(id)arg1;
- (BOOL)eliminateContainers:(id)arg1 thatDontContainContour:(id)arg2 usingRay:(id)arg3;
- (unsigned long long)numberOfTimesContour:(id)arg1 appearsInCrossings:(id)arg2;
- (BOOL)findCrossingsOnContainers:(id)arg1 onRay:(id)arg2 beforeMinimum:(struct CGPoint)arg3 afterMaximum:(struct CGPoint)arg4 crossingsBefore:(id)arg5 crossingsAfter:(id)arg6;
- (BOOL)findBoundsOfContour:(id)arg1 onRay:(id)arg2 minimum:(struct CGPoint *)arg3 maximum:(struct CGPoint *)arg4;
- (BOOL)containsContour:(id)arg1;
- (id)debugPathForJointsOfContour:(id)arg1;
- (id)debugPathForContainmentOfContour:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)debugPathForContainmentOfContour:(id)arg1;
- (id)closestCrossingToPoint:(struct CGPoint)arg1;
- (id)closestLocationToPoint:(struct CGPoint)arg1;
- (int)contourInsides:(id)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)insertSelfCrossings;
- (void)insertContourSelfCrossings;
- (BOOL)isIntersection:(id)arg1 atJoinOfEdge:(id)arg2 andEdge:(id)arg3;
- (void)sortCoincidentCrossings;
- (void)removeDuplicateCrossings;
- (void)removeCrossingsInOverlaps;
- (void)cleanupCrossingsWithBezierGraph:(id)arg1;
- (unsigned long long)insertCrossingsWithBezierGraph:(id)arg1;
- (id)bezierPathWithClass:(Class)arg1;
- (id)bezierPath;
- (id)noneWithBezierGraph:(id)arg1;
- (id)xorWithBezierGraph:(id)arg1;
- (void)markSelfCrossingsAsEntryOrExit;
- (void)markCrossingsAsEntryOrExitWithBezierGraph:(id)arg1 markInside:(BOOL)arg2;
- (void)differenceEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (id)differenceWithBezierGraph:(id)arg1;
- (void)intersectEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (void)intersectNonintersectingPartsIntoGraph:(id)arg1 withGraph:(id)arg2;
- (id)intersectWithBezierGraph:(id)arg1;
- (void)unionEquivalentNonintersectingContours:(id)arg1 withContours:(id)arg2 results:(id)arg3;
- (void)unionNonintersectingPartsIntoGraph:(id)arg1 withGraph:(id)arg2;
- (id)unionWithBezierGraph:(id)arg1;
- (id)performOperationWithGraph:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (id)convertToEvenOddWindingRule;
- (void)dealloc;
- (id)init;
- (id)initWithBezierPath:(id)arg1 orCGPath:(struct CGPath *)arg2;
- (id)initWithBezierPath:(id)arg1;
- (id)initWithCGPath:(struct CGPath *)arg1;

@end

