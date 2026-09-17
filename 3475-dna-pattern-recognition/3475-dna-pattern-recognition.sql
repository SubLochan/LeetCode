# Write your MySQL query statement below
select sample_id,dna_sequence,species ,(select count(*) where dna_sequence like 'ATG%') as has_start,
(select count(*) where dna_sequence like '%TAA' or dna_sequence like '%TAG' or dna_sequence like'%TGA') as has_stop,
(select count(*) where dna_sequence like '%ATAT%') as has_atat,
(select count(*) where dna_sequence like '%GGG%') as has_ggg from Samples order by sample_id;